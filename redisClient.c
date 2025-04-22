#include <stdio.h>
#include <hiredis/hiredis.h>
#include <stdlib.h>


int main(){
    //Connect to Redis server

    redisContext *c = redisConnect("127.0.0.1", 6379);

    if (c == NULL || c->err){
        if (c) {
            printf("Connection error: %s\n", c->errstr);
            redisFree(c);
        } else {
            printf("Connection error: can't allocate redis context.\n");
        }

        exit(1);
    }


    //Set a key in redis

    redisReply *reply = redisCommand(c, "SET %s %s", "Name", "Adwoa Onumah");
    printf("SET: %s\n", reply->str);
    freeReplyObject(reply);


    // Get a key in redis

    reply = redisCommand(c, "GET %s", "Name");
    printf("GET Name: %s",reply->str);
    freeReplyObject(reply);

    redisFree(c);

    return 0;
}