// Generated by Haxe 4.2.2
#ifndef INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_
#define INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,ui,_MultitouchInputMode,MultitouchInputMode_Impl_)

namespace openfl{
namespace ui{
namespace _MultitouchInputMode{


class HXCPP_CLASS_ATTRIBUTES MultitouchInputMode_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MultitouchInputMode_Impl__obj OBJ_;
		MultitouchInputMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4519187b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_"); }

		inline static ::hx::ObjectPtr< MultitouchInputMode_Impl__obj > __new() {
			::hx::ObjectPtr< MultitouchInputMode_Impl__obj > __this = new MultitouchInputMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MultitouchInputMode_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			MultitouchInputMode_Impl__obj *__this = (MultitouchInputMode_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MultitouchInputMode_Impl__obj), false, "openfl.ui._MultitouchInputMode.MultitouchInputMode_Impl_"));
			*(void **)__this = MultitouchInputMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MultitouchInputMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MultitouchInputMode_Impl_",c7,50,ff,d5); }

		static void __boot();
		static  ::Dynamic GESTURE;
		static  ::Dynamic NONE;
		static  ::Dynamic TOUCH_POINT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace ui
} // end namespace _MultitouchInputMode

#endif /* INCLUDED_openfl_ui__MultitouchInputMode_MultitouchInputMode_Impl_ */ 
