#pragma once


#include <memory>

#include <base_command.h>
#include <drawer.h>


class SceneBaseCommand : public BaseCommand {};


class DrawScene : public SceneBaseCommand {
public:
    DrawScene() = delete;
    explicit DrawScene(std::shared_ptr<BaseDrawer> drawer);
    ~DrawScene() override = default;

    void execute(std::shared_ptr<Facade> &facade) override;

private:
    std::shared_ptr<BaseDrawer> _drawer;
};