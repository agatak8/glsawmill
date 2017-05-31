#pragma once
#define SCENE_CYCLE 12
#define CYLINDER_SEGMENTS 16
#define LIGHT_COLOR (glm::vec3(252.0f/255,221.0f/255,128.0f/255))
#define LIGHT_INTENSITY 64.0f
#define TRUNK_COLOR (glm::vec3(55.0f/255,25.0f/255,0.0f))
#define TRUNK_INSIDE_COLOR (glm::vec3(200.0f/255,150.0f/255,90.0f/255))
#define TABLE_COLOR (glm::vec3(170.0f/255,135.0f/255,60.0f/255))
#define SAW_COLOR (glm::vec3(0.6f,0.6f,0.6f))
#define PILLAR_COLOR TABLE_COLOR
#define GROUND_COLOR (glm::vec3(1.0f,1.0f,1.0f))
#define BELT_COLOR (glm::vec3(0.2f,0.2f,0.2f))
#define LAMP_POST_COLOR (glm::vec3(0.05f,0.05f,0.05f))
#define LAMP_COLOR (glm::vec3(1,252.0/255,60.0/255))
#define GROUND_SIZE 100.0f
#define LOG_RADIUS 0.8f
#define LOG_INSIDE_RADIUS (0.85f*LOG_RADIUS)
#define LOG_WIDTH 5.0f
#define SAW_DEPTH 1.0f
#define SAW_WIDTH 11.0f
#define TABLE_HEIGHT 3.5f
#define TABLE_WIDTH 15.0f
#define TABLE_DEPTH 30.0f
#define BELT_THICKNESS 0.4f
#define LAMP_POST_THICKNESS 0.75f
#define LAMP_THICKNESS 1.5f
#define PILLAR_DEPTH 1.5f
#define LAMP_RADIUS (LAMP_THICKNESS*0.35f)
#define TABLE_Y TABLE_HEIGHT*0.5f
#define LOG_Y  (TABLE_HEIGHT*0.5f + TABLE_Y + LOG_RADIUS)
#define SAW_Y (TABLE_HEIGHT*0.5f + TABLE_Y + 7.5f)
#define HALVED_LOG_Z (LOG_WIDTH - TABLE_DEPTH*0.5f) 
#define PILLAR_HEIGHT (SAW_Y - TABLE_HEIGHT*0.5f - TABLE_Y + SAW_DEPTH*0.5f)
#define PILLAR_DISTANCE (SAW_WIDTH*0.5f)
#define PILLAR_Y ((TABLE_HEIGHT + PILLAR_HEIGHT)*0.5f + TABLE_Y)
#define PILE_Z (TABLE_DEPTH*0.5f + LOG_WIDTH*0.5f + 2.0f)
#define LAMP_POST_HEIGHT (PILLAR_Y + 0.5*PILLAR_HEIGHT + 2.5f)