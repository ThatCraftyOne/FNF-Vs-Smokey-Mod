// Generated by Haxe 4.2.2
#ifndef INCLUDED_openfl_ui__MouseCursor_MouseCursor_Impl_
#define INCLUDED_openfl_ui__MouseCursor_MouseCursor_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS3(openfl,ui,_MouseCursor,MouseCursor_Impl_)

namespace openfl{
namespace ui{
namespace _MouseCursor{


class HXCPP_CLASS_ATTRIBUTES MouseCursor_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MouseCursor_Impl__obj OBJ_;
		MouseCursor_Impl__obj();

	public:
		enum { _hx_ClassId = 0x38005e17 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.ui._MouseCursor.MouseCursor_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.ui._MouseCursor.MouseCursor_Impl_"); }

		inline static ::hx::ObjectPtr< MouseCursor_Impl__obj > __new() {
			::hx::ObjectPtr< MouseCursor_Impl__obj > __this = new MouseCursor_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MouseCursor_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			MouseCursor_Impl__obj *__this = (MouseCursor_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MouseCursor_Impl__obj), false, "openfl.ui._MouseCursor.MouseCursor_Impl_"));
			*(void **)__this = MouseCursor_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MouseCursor_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MouseCursor_Impl_",9b,d5,59,ed); }

		static void __boot();
		static ::String ARROW;
		static ::String AUTO;
		static ::String BUTTON;
		static ::String HAND;
		static ::String IBEAM;
		static ::String _hx___CROSSHAIR;
		static ::String _hx___CUSTOM;
		static ::String _hx___MOVE;
		static ::String _hx___RESIZE_NESW;
		static ::String _hx___RESIZE_NS;
		static ::String _hx___RESIZE_NWSE;
		static ::String _hx___RESIZE_WE;
		static ::String _hx___WAIT;
		static ::String _hx___WAIT_ARROW;
		static ::String fromLimeCursor( ::lime::ui::MouseCursor cursor);
		static ::Dynamic fromLimeCursor_dyn();

		static  ::lime::ui::MouseCursor toLimeCursor(::String this1);
		static ::Dynamic toLimeCursor_dyn();

};

} // end namespace openfl
} // end namespace ui
} // end namespace _MouseCursor

#endif /* INCLUDED_openfl_ui__MouseCursor_MouseCursor_Impl_ */ 
