#include "graphics.h"

graph_t g_graph;

void setup() {
    graph_init(&g_graph);
    graph_clear(&g_graph);
    graph_backlight_on(&g_graph);
}

void loop() {
    graph_clear_status(&g_graph);

    int x, y;
    for (x = 0; x < GRAPH_HEIGHT; x ++) {
        for (y = 0; y < GRAPH_WIDTH; y++) {
            graph_setxy_on(&g_graph, x, y);
        }
    }

    graph_flush(&g_graph);
}
