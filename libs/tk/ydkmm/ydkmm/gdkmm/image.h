// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GDKMM_IMAGE_H
#define _GDKMM_IMAGE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: image.hg,v 1.5 2006/04/12 11:11:24 murrayc Exp $ */

/* bitmap.h
 *
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/object.h>
#include <gdkmm/visual.h>
#include <gdkmm/colormap.h>
#include <gdkmm/types.h> //For ByteOrder.

 
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GdkImage GdkImage;
typedef struct _GdkImageClass GdkImageClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class Image_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{

/** @addtogroup gdkmmEnums gdkmm Enums and Flags */

/** 
 *
 * @ingroup gdkmmEnums
 */
enum ImageType
{
  IMAGE_NORMAL,
  IMAGE_SHARED,
  IMAGE_FASTEST
};

} // namespace Gdk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gdk::ImageType> : public Glib::Value_Enum<Gdk::ImageType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{


/** This represents an area for drawing graphics. It has now been superceded to a large extent by the much more flexible
 * Gdk::Drawable RGB functions.
 * To create an image from part of a Gdk::Window use Gdk::Drawable::get_image().
 *
 * The image can be manipulated with get_pixel() and put_pixel(), or alternatively by changing the actual pixel data, though
 * manipulating the pixel data requires complicated code to cope with the different formats that may be used.
 * To draw a Gdk::Image in a Gdk::Window or Gdk::Pixmap use Gdk::Drawable::draw_image().
 */

class Image : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Image CppObjectType;
  typedef Image_Class CppClassType;
  typedef GdkImage BaseObjectType;
  typedef GdkImageClass BaseClassType;

private:  friend class Image_Class;
  static CppClassType image_class_;

private:
  // noncopyable
  Image(const Image&);
  Image& operator=(const Image&);

protected:
  explicit Image(const Glib::ConstructParams& construct_params);
  explicit Image(GdkImage* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Image();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkImage*       gobj()       { return reinterpret_cast<GdkImage*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkImage* gobj() const { return reinterpret_cast<GdkImage*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkImage* gobj_copy();

private:

  
protected:

  /** Instantiate a new Gdk::Image.
   *
   * @param type The type of the Gdk::Image. Gdk::IMAGE_FASTEST is probably the best choice, since it will try to create a Gdk::IMAGE_SHARED image first and if that fails it will then use Gdk::IMAGE_NORMAL.
   * @param visual The Gdk::Visual to use for the image.
   * @param width The width of the image in pixels.
   * @param height The height of the image in pixels.
   */
  Image(ImageType type, const Glib::RefPtr<Visual>& visual, int	width, int height);
  

public:
  
  static Glib::RefPtr<Image> create(ImageType type, const Glib::RefPtr<Visual>& visual, int width, int height);


  //We ignore gdk_image_new_bitmap() because the documentation says that it is deprecated.
  

  void put_pixel(int x, int y, guint32 pixel);
  
  guint32 get_pixel(int x, int y) const;
  
  /** Sets the colormap for the image to the given colormap.  Normally
   * there's no need to use this function, images are created with the
   * correct colormap if you get the image from a drawable. If you
   * create the image from scratch, use the colormap of the drawable you
   * intend to render the image to.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @param colormap A Gdk::Colormap.
   */
  void set_colormap(const Glib::RefPtr<Colormap>& colormap);
  
  /** Retrieves the colormap for a given image, if it exists.  An image
   * will have a colormap if the drawable from which it was created has
   * a colormap, or if a colormap was set explicitely with
   * set_colormap().
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return Colormap for the image.
   */
  Glib::RefPtr<Colormap> get_colormap();
  
  /** Retrieves the colormap for a given image, if it exists.  An image
   * will have a colormap if the drawable from which it was created has
   * a colormap, or if a colormap was set explicitely with
   * set_colormap().
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return Colormap for the image.
   */
  Glib::RefPtr<const Colormap> get_colormap() const;

  
  /** Determines the type of a given image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The Gdk::ImageType of the image.
   */
  ImageType get_image_type() const;
  
  /** Determines the visual that was used to create the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return A Gdk::Visual.
   */
  Glib::RefPtr<Visual> get_visual();
  
  /** Determines the visual that was used to create the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return A Gdk::Visual.
   */
  Glib::RefPtr<const Visual> get_visual() const;
  
  /** Determines the byte order of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return A Gdk::Visual.
   */
  ByteOrder get_byte_order() const;
  
  /** Determines the width of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The width.
   */
  int get_width() const;
  
  /** Determines the height of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The height.
   */
  int get_height() const;
  
  /** Determines the depth of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The depth.
   */
  guint16 get_depth() const;

  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Determines the number of bytes per pixel of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @deprecated Use get_bytes_per_pixel()
   * 
   * @return The bytes per pixel.
   */
  guint16 get_bpp() const;
#endif // GDKMM_DISABLE_DEPRECATED


  /** Determines the number of bytes per pixel of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The bytes per pixel.
   */
  guint16 get_bytes_per_pixel() const;

  
#ifndef GDKMM_DISABLE_DEPRECATED

  /** Determines the number of bytes per line of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @deprecated Use get_bytes_per_line()
   * 
   * @return The bytes per line.
   */
  guint16 get_bpl() const;
#endif // GDKMM_DISABLE_DEPRECATED


  /** Determines the number of bytes per line of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The bytes per line.
   */
  guint16 get_bytes_per_line() const;

  
  /** Determines the number of bits per pixel of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The bits per pixel.
   */
  guint16 get_bits_per_pixel() const;

  
  /** Returns a pointer to the pixel data of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The pixel data of the image.
   */
  void* get_pixels();
  
  /** Returns a pointer to the pixel data of the image.
   * 
   * Deprecated: 2.22: Gdk::Image should not be used anymore.
   * 
   * @return The pixel data of the image.
   */
  const void* get_pixels() const;

#ifndef GDKMM_DISABLE_DEPRECATED

  //This memory block is not read-only, apparently:
  /** @deprecated Use get_pixels().
   */
   void* get_mem();
  const void* get_mem() const;
 #endif // GDKMM_DISABLE_DEPRECATED


  //TODO: This should be const really.
   void* get_windowing_data() const;
 

public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} /* namespace Gdk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::Image
   */
  Glib::RefPtr<Gdk::Image> wrap(GdkImage* object, bool take_copy = false);
}


#endif /* _GDKMM_IMAGE_H */

