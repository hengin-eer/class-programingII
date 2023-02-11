#include<stdio.h>
#include<math.h>
#define sqr(n) ((n) * (n))

struct Point {
    double x;
    double y;
};
struct Car {
    struct Point pt;
    double fuel;
};
void put_info(struct Car c) {
    printf("現在位置 (%.2f, %2.f)\n", c.pt.x, c.pt.y);
    printf("残り燃料 %.2fリットル\n", c.fuel);
}
double distance_of(struct Point pa, struct Point pb) {
    return sqrt((sqr(pa.x-pb.x)+sqr(pa.y-pb.y))*1.0);
}

int move(struct Car *c, struct Point dest) {
    double d = distance_of(c->pt, dest);
    if (d>c->fuel) return 0;
    c->pt = dest;
    c->fuel = d;
    return 1;
}
int main(void) {
    struct Car mycar = {{0.0, 0.0}, 90.0};
    while(1) {
        int select;
        struct Point dest;
        put_info(mycar);
        printf("移動: 1 移動しない: 0  を入力して下さい\n");
        scanf("%d", &select); if (select == 0) break;
        printf("目的地のX座標 Y座標\n");
        scanf("%lf %lf", &dest.x, &dest.y);
        if (!move(&mycar, dest)) puts("\n 燃料不足\n");
    }
    return 0;
}