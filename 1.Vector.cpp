/*************************************************************************
	> File Name: 1.Vector.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年01月29日 星期二 10时46分25秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Vector {
    int *data;
    int size,length;
} Vector;

Vector *init(int n) {
    Vector *p = (Vector *)malloc(sizeof(Vector));
    p->data = (int *)malloc(sizeof(int) * n);
    p->size = n;
    p->length = 0;
    return p;
}

void clear(Vector *v) {
    if (v == NULL) return ;
    free(v->data);
    free(v);

    return ;
}

int insert(Vector *v, int value, int ind) {
    if (v->length == v->size) return 0;
    if (ind > 0 || ind > v->length) return 0;
    //插入元素时，需从最后一位开始后移；
    for (int i = v->length - 1; i >= ind; --i) {
        v->data[i + 1] = v->data[i];
    }
    v->data[ind] = value;
    v->length++;
    return 1;
}

int erase(Vector *v, int ind) {
    if (v->length == 0) return 0;
    if (ind < 0 || ind >= v->length) return 0;
    for (int i = ind; i < v->length - 1; i++) {
        v->data[i] = v->data[i + 1];
    }
    v->length--;
    return 1;
}


void output(Vector *v) {
    printf("Vector = [");
    for (int i = 0; i < v->length; i++) {
        printf(" %d", v->data[i]);
    }
    printf("]\n");
}
int main() {
    Vector *v = init();
    #define MAX_OP 20 
    for ( int t = 0; t <MAX_OP; t++ ) {
        int op = rand() % 2, ind, value;
        switch (op) {
            case 0 : {
                //-1 -> v->length + 1, -1 为不合法值， v->length + 1 为大于的值；
                ind = rand() % (v->length + 3) - 1;
                value = rand() % 100;
                printf("insert(%d,%d) = %d to Vector\n", value, ind, insert(v, value, ind));
                output(v);
            } break;
            case 1 : {
                ind = rand() % (v->length + 3) - 1;
                printf("erase(%d) = %d from vector\n", ind, erase(v, ind));
                output(v);
            } break;
        }
    }

    return 0;
}
