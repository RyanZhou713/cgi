#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef __http_server_h
#define __http_server_h

#include "../util/tools.h"
#include "request.h"

#define getenv(name) (char *)getenv(name)

typedef enum {GET,POST,PUT,DELETE} method;
typedef struct{
    int contentLength;
    char *queryString;    
    method requestMethod;
    char *requestMethodStr;
    char *contentType;
    char *scriptFileName;
    char *scriptName;
    char *requestUri;
    char *documentUri;
    char *serverProtocol;
    char *remoteAddr;
    char *remotePort;
    char *serverAddr;
    char *serverPort;
    char *serverName;
    char *scream;
} server;

extern void serverInit();
extern server SERVER;
void destroyServer();
#endif
