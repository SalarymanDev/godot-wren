#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include "wren.h"
#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class GDExample : public Sprite2D {
	GDCLASS(GDExample, Sprite2D)

private:
	double time_passed;
	WrenVM *vm;

protected:
	static void _bind_methods();

public:
	GDExample();
	~GDExample();

	void _process(double delta) override;
};

}

#endif
