from django.db import models


class Author(models.Model):
    name = models.CharField(max_length=50)


class BlogPost(models.Model):
    title = models.CharField(max_length=250)
    body = models.TextField()
    author = models.ForeignKey(Author, on_delete=models.CASCADE)
    date_created = models.DateTimeField(auto_now=True)

    def copy(self):
        previous_id = self.id
        self.id = None
        self.save()
        for comment in BlogPost.objects.get(id=previous_id).comment_set.all():
            comment.id = None
            comment.save()
            comment.blog_post_id = self.id
            comment.save()
        return self.id


class Comment(models.Model):
    blog_post = models.ForeignKey(BlogPost, on_delete=models.CASCADE)
    text = models.TextField(max_length=500)
