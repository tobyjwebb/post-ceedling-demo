# post-ceedling-demo

This is a basic Ceedling example used to illustrate some of the work we have been doing @ Zaleos on the Ceedling framework.
It is the example code from the following blog post:

[Unit Testing C Code with Ceedling and CMock](https://blog.zaleos.net/unit-testing-c-code-with-ceedling-and-cmock/)

## Docker image

To generate a clean Docker image with the necessary tools installed, you can run:
(Supposing you have Make and Docker installed)
`make dockerimage`
This will generate a Docker image called zaleos-ubuntu.

Or, alternatively, you can generate the file from the Dockerfile provided:
`docker build -t nameoftheimage .`

Once the image has been generated, you can start a session using the following command:
`docker run --rm -ti --name zaleos-ubuntu -v $(pwd):/root/basic-ceedling-example zaleos-ubuntu`
(Note that with the `--rm` argument, the container will be automatically cleaned up after you exit the shell.)
