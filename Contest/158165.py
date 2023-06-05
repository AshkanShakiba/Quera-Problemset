def main():
    t = int(input())
    for i in range(0, t):
        n = int(input())
        u = "B"
        if n > 1023:
            n = n // 1024
            u = "KiB"
        if n > 1023:
            n = n // 1024
            u = "MiB"
        print(str(n) + u)


if __name__ == "__main__":
    main()
