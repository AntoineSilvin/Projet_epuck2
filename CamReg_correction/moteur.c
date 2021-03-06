#include <distance.h>
#include <color.h>
#include <moteur.h>
#include "ch.h"
#include <leds.h>

#define TURN_SPEED 175
#define FOREWARD_SPEED 350
  #define RIGHT 0
          #define LEFT 1
#define DISTANCE_TRESHOLD 40

void turn(int8_t DIRECTION){
         if(DIRECTION == RIGHT){
          			left_motor_set_speed(-TURN_SPEED);
					right_motor_set_speed(TURN_SPEED); }
         		else if(DIRECTION == LEFT){
          			left_motor_set_speed(TURN_SPEED);
					right_motor_set_speed(-TURN_SPEED); }
				else{
          			stop(); } }

			void stop(){
				left_motor_set_speed(0);
				right_motor_set_speed(0); }

			void go_foreward(){
				left_motor_set_speed(FOREWARD_SPEED);
				right_motor_set_speed(FOREWARD_SPEED); }
