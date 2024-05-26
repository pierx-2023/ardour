// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_RECENTFILTER_H
#define _GTKMM_RECENTFILTER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2006 The gtkmm Development Team
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

#include <gtkmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkRecentFilter GtkRecentFilter;
typedef struct _GtkRecentFilterClass GtkRecentFilterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class RecentFilter_Class; } // namespace Gtk
namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *
 * @ingroup gtkmmEnums
 * @par Bitwise operators:
 * <tt>%RecentFilterFlags operator|(RecentFilterFlags, RecentFilterFlags)</tt><br>
 * <tt>%RecentFilterFlags operator&(RecentFilterFlags, RecentFilterFlags)</tt><br>
 * <tt>%RecentFilterFlags operator^(RecentFilterFlags, RecentFilterFlags)</tt><br>
 * <tt>%RecentFilterFlags operator~(RecentFilterFlags)</tt><br>
 * <tt>%RecentFilterFlags& operator|=(RecentFilterFlags&, RecentFilterFlags)</tt><br>
 * <tt>%RecentFilterFlags& operator&=(RecentFilterFlags&, RecentFilterFlags)</tt><br>
 * <tt>%RecentFilterFlags& operator^=(RecentFilterFlags&, RecentFilterFlags)</tt><br>
 */
enum RecentFilterFlags
{
  RECENT_FILTER_URI = 1 << 0,
  RECENT_FILTER_DISPLAY_NAME = 1 << 1,
  RECENT_FILTER_MIME_TYPE = 1 << 2,
  RECENT_FILTER_APPLICATION = 1 << 3,
  RECENT_FILTER_GROUP = 1 << 4,
  RECENT_FILTER_AGE = 1 << 5
};

/** @ingroup gtkmmEnums */
inline RecentFilterFlags operator|(RecentFilterFlags lhs, RecentFilterFlags rhs)
  { return static_cast<RecentFilterFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline RecentFilterFlags operator&(RecentFilterFlags lhs, RecentFilterFlags rhs)
  { return static_cast<RecentFilterFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline RecentFilterFlags operator^(RecentFilterFlags lhs, RecentFilterFlags rhs)
  { return static_cast<RecentFilterFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline RecentFilterFlags operator~(RecentFilterFlags flags)
  { return static_cast<RecentFilterFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gtkmmEnums */
inline RecentFilterFlags& operator|=(RecentFilterFlags& lhs, RecentFilterFlags rhs)
  { return (lhs = static_cast<RecentFilterFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline RecentFilterFlags& operator&=(RecentFilterFlags& lhs, RecentFilterFlags rhs)
  { return (lhs = static_cast<RecentFilterFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline RecentFilterFlags& operator^=(RecentFilterFlags& lhs, RecentFilterFlags rhs)
  { return (lhs = static_cast<RecentFilterFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::RecentFilterFlags> : public Glib::Value_Flags<Gtk::RecentFilterFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** RecentFilter can be used to restrict the files being shown
 * in a RecentChooser.  Files can be filtered based on their name
 * (with add_pattern()), on their mime type (with add_mime_type()),
 * on the application that has registered them (with add_application()),
 * or by a custom filter function (with add_custom()).
 *
 * Filtering by mime type handles aliasing and subclassing of mime
 * types; e.g. a filter for text/plain also matches a file with mime
 * type application/rtf, since application/rtf is a subclass of text/plain.
 * Note that RecentFilter allows wildcards for the subtype of a
 * mime type, so you can e.g. filter for image/ *.
 *
 * Normally, filters are used by adding them to a RecentChooser,
 * see RecentChooser::add_filter(), but it is also possible to
 * manually use a filter on a file with filter().
 *
 * @ingroup RecentFiles
 */

class RecentFilter : public Gtk::Object
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef RecentFilter CppObjectType;
  typedef RecentFilter_Class CppClassType;
  typedef GtkRecentFilter BaseObjectType;
  typedef GtkRecentFilterClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~RecentFilter();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class RecentFilter_Class;
  static CppClassType recentfilter_class_;

  // noncopyable
  RecentFilter(const RecentFilter&);
  RecentFilter& operator=(const RecentFilter&);

protected:
  explicit RecentFilter(const Glib::ConstructParams& construct_params);
  explicit RecentFilter(GtkRecentFilter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkRecentFilter*       gobj()       { return reinterpret_cast<GtkRecentFilter*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkRecentFilter* gobj() const { return reinterpret_cast<GtkRecentFilter*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  RecentFilter();

  
  /** Sets the human-readable name of the filter; this is the string
   * that will be displayed in the recently used resources selector
   * user interface if there is a selectable list of filters.
   * 
   * @param name Then human readable name of @a filter.
   */
  void set_name(const Glib::ustring& name);
  
  /** Gets the human-readable name for the filter.
   * See set_name().
   * 
   * @return The name of the filter, or <tt>0</tt>.  The returned string
   * is owned by the filter object and should not be freed.
   */
  Glib::ustring get_name() const;

  
  /** Adds a rule that allows resources based on their registered MIME type.
   * 
   * @param mime_type A MIME type.
   */
  void add_mime_type(const Glib::ustring& mime_type);
  
  /** Adds a rule that allows resources based on a pattern matching their
   * display name.
   * 
   * @param pattern A file pattern.
   */
  void add_pattern(const Glib::ustring& pattern);
  
  /** Adds a rule allowing image files in the formats supported
   * by GdkPixbuf.
   */
  void add_pixbuf_formats();
  
  /** Adds a rule that allows resources based on the name of the application
   * that has registered them.
   * 
   * @param application An application name.
   */
  void add_application(const Glib::ustring& application);
  
  /** Adds a rule that allows resources based on the name of the group
   * to which they belong
   * 
   * @param group A group name.
   */
  void add_group(const Glib::ustring& group);
  
  /** Adds a rule that allows resources based on their age - that is, the number
   * of days elapsed since they were last modified.
   * 
   * @param days Number of days.
   */
  void add_age(int days);

  /** A RecentFilter::Info class is used to pass information
   * about the tested file to filter().
   *
   * - contains: Flags indicating which of the following fields need are filled
   * - uri: the URI of the file being tested
   * - display_name: the string that will be used to display the file in the recent chooser
   * - mime_type: the mime type of the file
   * - applications: the list of applications that have registered the file
   * - groups: the groups to which the file belongs to
   * - age: the number of days elapsed since the file has been registered
   */
  class Info
  {
  public:
    Info();

    ///This bitmask tells us which of the other variables contain useful information.
    RecentFilterFlags contains;

    Glib::ustring uri;
    Glib::ustring display_name;
    Glib::ustring mime_type;
    std::list<Glib::ustring> applications;
    std::list<Glib::ustring> groups;
    int age;
  };

  /// For instance, bool on_custom(const Gtk::RecentFilter::Info& filter_info);
  typedef sigc::slot<bool, const Info&> SlotCustom;
  
  void add_custom(RecentFilterFlags needed, const SlotCustom& slot);
  

  /** Gets the fields that need to be filled in for the structure
   * passed to filter()
   * 
   * This function will not typically be used by applications; it
   * is intended principally for use in the implementation of
   * Gtk::RecentChooser.
   * 
   * @return Bitfield of flags indicating needed fields when
   * calling filter().
   */
  RecentFilterFlags get_needed() const;

  // Method is used by class RecentChooser implementors.
  
  //_WRAP_METHOD(bool filter(const GtkRecentFilterInfo* filter_info), gtk_recent_filter_filter)


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::RecentFilter
   */
  Gtk::RecentFilter* wrap(GtkRecentFilter* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_RECENTFILTER_H */

