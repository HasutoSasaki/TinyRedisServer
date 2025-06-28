FROM ubuntu:24.04

# 必要なパッケージのインストール
RUN apt-get update && \
    apt-get install -y build-essential git vim

# 作業ディレクトリの作成
WORKDIR /workspace

CMD ["/bin/bash"]