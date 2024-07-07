#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4

class Camera
{
public:
    Camera():pos(glm::vec3(0.0f, 1.0f, 1.0f)), up(glm::vec3(0.0f, 0.1f, 0.0f)), front(glm::vec3(0.0f, 0.0f, -1.0f)) {}
    Camera(glm::vec3 p, glm::vec3 f, glm::vec3 u):pos(p),front(f),up(u) {}
    void SetPos(glm::vec3 p) {pos = p;}
    void SetFront(glm::vec3 f) {front = f;}
    void SetUp(glm::vec3 u) {up = u;}
    void SetCamera(glm::vec3 p, glm::vec3 f, glm::vec3 u) {pos = p; front = f; up = u;}
    const glm::vec3 &GetPos() {return pos;}
    const glm::vec3 &GetFront() {return front;}
    const glm::vec3 &GetUp() {return up;}
private:
    glm::vec3 pos;
    glm::vec3 front;
    glm::vec3 up;
};
