#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "mu_test.h"

#include "abstractBrick.hpp"
#include "normalBrick.hpp"
#include "hardBrick.hpp"
#include "unbreakableBrick.hpp"
#include "explodingBrick.hpp"
#include "ball.hpp"
#include "paddle.hpp"
#include "level.hpp"
#include "game.hpp"
#include "score.hpp"

BEGIN_TEST(demo)
    sf::Vector2u windowSize(800, 600);
    std::string windowTitle = "My Game";
    std::string a_playerName;
    std::cout << "Enter player name!\n";
    std::cin >> a_playerName;

    Game game(windowSize, windowTitle, a_playerName);
    game.Run();

    ASSERT_PASS();
END_TEST

// BEGIN_TEST(_test_make_normalBrick)
//     NormalBrick brick(sf::Vector2f(20, 20), sf::Vector2f(100, 20));
//     ASSERT_PASS();
//     END_TEST

//     BEGIN_TEST(_test_make_normalBrick_array)
//     NormalBrick *bricks = new NormalBrick[42];
//     ASSERT_PASS();
//     END_TEST

//     BEGIN_TEST(_test_brick_draw)
//     sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }
//         window.clear(sf::Color::Black);
//         brick.Draw(window);
//         window.display();
//     }
//     ASSERT_PASS();
// END_TEST

// BEGIN_TEST(_test_make_normalBrick)
//     NormalBrick brick(sf::Vector2f(20, 20), sf::Vector2f(100, 20));
//     ASSERT_PASS();
// END_TEST

// BEGIN_TEST(_test_make_normalBrick_array)
//     NormalBrick *bricks = new NormalBrick[42];
//     ASSERT_PASS();
// END_TEST

// BEGIN_TEST(_test_brick_draw)
//     sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }
//         window.clear(sf::Color::Black);
//         brick.Draw(window);
//         window.display();
//     }
//     ASSERT_PASS();
// END_TEST

// BEGIN_TEST(_test_brick_GetPosition)
//     sf::Vector2f position(400, 400);
//     sf::Vector2f size(100, 20);
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     ASSERT_THAT(brick.GetPosition() == position);
// END_TEST

// BEGIN_TEST(_test_brick_SetLocation)
//     sf::Vector2f position(100, 400);
//     sf::Vector2f size(100, 20);
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     brick.SetPosition(position);
//     ASSERT_THAT(brick.GetPosition() == position);

// END_TEST

// BEGIN_TEST(_test_brick_GetSize)
//     sf::Vector2f position(400, 400);
//     sf::Vector2f size(100, 20);
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     ASSERT_THAT(brick.GetSize() == size);
// END_TEST

// BEGIN_TEST(_test_brick_GetHits)
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     ASSERT_THAT(brick.GetHits() == 1);
// END_TEST

// BEGIN_TEST(_test_brick_SetHits)
//     NormalBrick brick(sf::Vector2f(400, 400), sf::Vector2f(100, 20));
//     brick.SetHits(2);
//     ASSERT_THAT(brick.GetHits() == 2);

// END_TEST

// BEGIN_TEST(_test_brick_GetX)
//     NormalBrick brick(sf::Vector2f(400, 300), sf::Vector2f(100, 20));
//     ASSERT_THAT(brick.GetPosX() == 400);
// END_TEST

// BEGIN_TEST(_test_brick_GetY)
//     NormalBrick brick(sf::Vector2f(400, 300), sf::Vector2f(100, 20));
//     ASSERT_THAT(brick.GetPosY() == 300);
// END_TEST

// BEGIN_TEST(_test_brick_ToDelete)
//     NormalBrick brick(sf::Vector2f(400, 300), sf::Vector2f(100, 20));

//     ASSERT_THAT(!brick.ToDelete());
// END_TEST

// BEGIN_TEST(_test_brick_ToDelete2)
//     NormalBrick brick(sf::Vector2f(400, 300), sf::Vector2f(100, 20));
//     brick.SetHits(0);
//     ASSERT_THAT(brick.ToDelete());
// END_TEST

// BEGIN_TEST(_test_brick_s)
//     NormalBrick brick(sf::Vector2f(400, 300), sf::Vector2f(100, 20));
//     ASSERT_THAT(brick.Left() == (400.0 - 100.0 / 2));
//     ASSERT_THAT(brick.Right() == (400.0 + 100.0 / 2));
//     ASSERT_THAT(brick.Top() == (300.0 - 20.0 / 2));
//     ASSERT_THAT(brick.Bottom() == (300.0 + 20.0 / 2));
// END_TEST

// BEGIN_TEST(ball_get_position_test)
//     Ball ball(sf::Vector2f(100.f, 100.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);
//     sf::Vector2f pos = ball.GetPosition();

//     ASSERT_EQUAL(pos.x, 100.f);
//     ASSERT_EQUAL(pos.y, 100.f);
// END_TEST

// BEGIN_TEST(ball_get_velocity_test)
//     Ball ball(sf::Vector2f(100.f, 100.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);
//     sf::Vector2f vel = ball.GetVelocity();

//     ASSERT_EQUAL(vel.x, 1.f);
//     ASSERT_EQUAL(vel.y, 1.f);
// END_TEST

// BEGIN_TEST(ball_set_position_test)
//     Ball ball(sf::Vector2f(100.f, 100.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     ball.SetPosition(sf::Vector2f(50.f, 30.f));
//     sf::Vector2f pos = ball.GetPosition();

//     ASSERT_EQUAL(pos.x, 50.f);
//     ASSERT_EQUAL(pos.y, 30.f);
// END_TEST

// BEGIN_TEST(ball_set_velocity_test)
//     Ball ball(sf::Vector2f(100.f, 100.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     ball.SetVelocity(sf::Vector2f(3.f, 3.f));
//     sf::Vector2f vel = ball.GetVelocity();

//     ASSERT_EQUAL(vel.x, 3.f);
//     ASSERT_EQUAL(vel.y, 3.f);
// END_TEST

// BEGIN_TEST(ball_get_radius_test)
//     Ball ball(sf::Vector2f(100.f, 100.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     float r = ball.GetRadius();

//     ASSERT_EQUAL(r, 10.f);
// END_TEST

// BEGIN_TEST(ball_get_pos_x_test)
//     Ball ball(sf::Vector2f(100.f, 80.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     float x = ball.GetPosX();

//     ASSERT_EQUAL(x, 100.f);
// END_TEST

// BEGIN_TEST(ball_get_pos_y_test)
//     Ball ball(sf::Vector2f(100.f, 80.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     float x = ball.GetPosY();

//     ASSERT_EQUAL(x, 80.f);
// END_TEST

// BEGIN_TEST(ball_circumference_test)
//     Ball ball(sf::Vector2f(100.f, 80.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     float l = ball.Left();
//     float r = ball.Right();
//     float t = ball.Top();
//     float b = ball.Bottom();

//     ASSERT_EQUAL(l, 100.f - 10.f);
//     ASSERT_EQUAL(r, 100.f + 10.f);
//     ASSERT_EQUAL(t, 80.f - 10.f);
//     ASSERT_EQUAL(b, 80.f + 10.f);
// END_TEST

// BEGIN_TEST(ball_update_test)
//     Ball ball(sf::Vector2f(100.f, 80.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     ball.Update(2.0f);
//     sf::Vector2f pos = ball.GetPosition();

//     ASSERT_EQUAL(pos.x, 102.f);
//     ASSERT_EQUAL(pos.y, 80.f);
// END_TEST

// BEGIN_TEST(ball_draw_test)
//     sf::RenderWindow window(sf::VideoMode(800, 600), "Test Ball");
//     Ball ball(sf::Vector2f(100.f, 80.f), sf::Vector2f(1.f, 1.f), sf::Color::Red, 10.f);

//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//             {
//                 window.close();
//             }
//         }

//         ball.Draw(window);
//         window.display();
//     }
//     ASSERT_PASS();
// END_TEST

TEST_SUITE([Game Tests])
    // TEST(_test_make_normalBrick)
    // TEST(_test_make_normalBrick_array)
    // IGNORE_TEST(_test_brick_draw)
    // TEST(_test_brick_GetPosition)
    // TEST(_test_brick_SetLocation)
    // TEST(_test_brick_GetSize)
    // TEST(_test_brick_GetHits)
    // TEST(_test_brick_SetHits)
    // TEST(_test_brick_GetX)
    // TEST(_test_brick_GetY)
    // TEST(_test_brick_ToDelete)
    // TEST(_test_brick_ToDelete2)
    // TEST(_test_brick_s)
    // TEST(ball_get_position_test)
    // TEST(ball_get_velocity_test)
    // TEST(ball_set_position_test)
    // TEST(ball_set_velocity_test)
    // TEST(ball_get_radius_test)
    // TEST(ball_get_pos_x_test)
    // TEST(ball_get_pos_y_test)
    // TEST(ball_circumference_test)
    // TEST(ball_update_test)
    // TEST(ball_update_test)
    // IGNORE_TEST(ball_draw_test)
    TEST(demo)
END_SUITE
