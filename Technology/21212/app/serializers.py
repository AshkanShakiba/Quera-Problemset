from rest_framework import serializers

from .models import Post, Comment


class PostSerializer(serializers.ModelSerializer):
    owner = serializers.CharField(source="owner.username", read_only=True)

    class Meta:
        fields = (
            "title",
            "body",
            "created",
            "owner",
        )
        model = Post


class PostDetailSerializer(serializers.ModelSerializer):
    owner = serializers.CharField(source="owner.username", read_only=True)
    comment_set = serializers.HyperlinkedRelatedField(
        many=True,
        read_only=True,
        view_name="comment_detail"
    )

    class Meta:
        fields = (
            "title",
            "body",
            "created",
            "updated",
            "owner",
            "comment_set",
        )
        model = Post


class CommentSerializer(serializers.ModelSerializer):
    owner = serializers.CharField(source="owner.username", read_only=True)
    post = serializers.HyperlinkedRelatedField(
        read_only=True,
        view_name="post_detail"
    )

    class Meta:
        fields = (
            "post",
            "owner",
            "body",
            "created",
            "updated",
        )
        model = Comment
