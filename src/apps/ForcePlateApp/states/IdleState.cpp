/**
 * /file IdleState.cpp
 * /author Justin Fong
 * /brief Nothing happens in this state, just waiting for action
 * /version 0.1
 * /date 2021-1-21
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "IdleState.h"

IdleState::IdleState(StateMachine *m, ForcePlate *robot, const char *name) : State(m, name), robot(robot) {
    spdlog::debug("IdleState Created");
};
void IdleState::entry(void) {
    spdlog::debug("IdleState entry");
    spdlog::info("Press A to Calibrate or S to start logging");
};

void IdleState::during(void){
    // Do nothing
};

void IdleState::exit(void) {
    spdlog::debug("IdleState Exit");
};