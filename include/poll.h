/*
 The poll is responsible for containing the functions that are
 to be executed and chaining them together.
*/
#ifndef POLL_H
#define POLL_H

#include "func.h"
#include <stdint.h>
#include <stdbool.h>

#define DEFAULT_POLL_CAPACITY 10

struct poll_ctx
{
    func_t *functions;
    int32_t size;
    int32_t capacity;
    int32_t index;
    bool is_running;
};

struct poll
{
    struct poll_ctx *ctx;
    void (*chain)(struct poll *, function);
    void (*wait)(struct poll *);
};

typedef struct poll poll_t;

poll_t *poll_new();
void poll_free(poll_t *poll);

#endif