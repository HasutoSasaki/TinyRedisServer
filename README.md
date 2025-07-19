# TinyRedisServer

## Docker 環境

### イメージをビルド

```bash
docker build -t tiny-redis-dev .
```

### コンテナを起動

```bash
docker run --rm -it -v $(pwd):/workspace tiny-redis-dev
```

## C++ 言語での実装

### コンパイル

```bash
g++ -o .output/hello src/hello.cpp
```

### プログラム実行

```bash
./.output/hello
```
