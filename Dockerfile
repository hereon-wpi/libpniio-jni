FROM adoptopenjdk/openjdk11:jdk-11.0.11_9-debian

RUN apt-get -qq update && export DEBIAN_FRONTEND=noninteractive && apt-get -qq install -y gnupg2 software-properties-common curl
RUN curl http://repos.pni-hdri.de/debian_repo.pub.gpg | apt-key add -
RUN add-apt-repository "deb http://repos.pni-hdri.de/apt/debian buster main" -y
RUN apt-get -qq update && export DEBIAN_FRONTEND=noninteractive && apt-get -qq dist-upgrade
RUN apt-get -qq update && export DEBIAN_FRONTEND=noninteractive && apt-get -qq install -y python3-sphinx apt-utils net-tools
RUN apt-get -qq install -y libpnicore1.1.1-dev libpnicore1.1.1 libpniio1.3.1-dev libpniio1.3.1 libh5cpp0.4.0-dev libh5cpp0.4.0 python3-numpy libhdf5-dev libboost-regex-dev libboost-program-options-dev libboost-system-dev libboost-date-time-dev libboost-filesystem-dev libblas-dev libatlas-base-dev cython3 python3-setuptools libboost-python-dev python3-numpy-abi9 g++ python3-h5py
RUN apt-get -qq install -y hdf5-plugin-bshuf hdf5-plugin-bz2 hdf5-plugin-lz4

RUN apt-get update \
  && apt-get install -y build-essential \
      pkg-config \
      gcc \
      g++ \
      gdb \
      clang \
      cmake \
      rsync \
  && apt-get clean
