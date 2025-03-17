// tree.h
#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <assert.h>
#include <errno.h>

#define TagRoot 1
#define TagNode 2
#define TgaLeaf 4

typedef unsigned int u32;
typedef unsigned short int u16;
typedef unsigned char u8;
typedef u8 Tag;

typedef struct s_node
{
    Tag tag;
    struct s_node *north;
    struct s_node *west;
    struct s_leaf *east;
    u8 path[256];
} Node;

typedef struct s_leaf
{
    Tag tag;
    union u_tree *west;
    struct s_leaf *east;
    u8 key[128];
    u8 *value;
    u16 size;
} Leaf;

typedef union u_tree
{
    Node n;
    Leaf l;
} Tree;