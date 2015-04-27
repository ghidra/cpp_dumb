//http://stackoverflow.com/questions/11747954/c-inheritance-in-separate-files-using-include-and-inclusion-guards
#pragma once

#ifndef POLY_H
#define POLY_H

class poly{
	public:
		poly();
		poly(const float & w,const float & h);

		virtual ~poly();

		float get_width();
		float get_height();
		void set_width(const float & w);
		void set_height(const float & h);

		virtual float area();

	private:
		float width, height;
};

#endif