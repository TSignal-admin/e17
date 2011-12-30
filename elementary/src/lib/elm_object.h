/**
 * Set a label of an object
 *
 * @param obj The Elementary object
 * @param part The text part name to set (NULL for the default label)
 * @param label The new text of the label
 *
 * @note Elementary objects may have many labels (e.g. Action Slider)
 * @deprecated Use elm_object_part_text_set() instead.
 * @ingroup General
 */
EINA_DEPRECATED EAPI void         elm_object_text_part_set(Evas_Object *obj, const char *part, const char *label);

/**
 * Set a label of an object
 *
 * @param obj The Elementary object
 * @param part The text part name to set (NULL for the default label)
 * @param label The new text of the label
 *
 * @note Elementary objects may have many labels (e.g. Action Slider)
 *
 * @ingroup General
 */
EAPI void                         elm_object_part_text_set(Evas_Object *obj, const char *part, const char *label);

#define elm_object_text_set(obj, label) elm_object_part_text_set((obj), NULL, (label))

/**
 * Get a label of an object
 *
 * @param obj The Elementary object
 * @param part The text part name to get (NULL for the default label)
 * @return text of the label or NULL for any error
 *
 * @note Elementary objects may have many labels (e.g. Action Slider)
 * @deprecated Use elm_object_part_text_get() instead.
 * @ingroup General
 */
EINA_DEPRECATED EAPI const char  *elm_object_text_part_get(const Evas_Object *obj, const char *part);

/**
 * Get a label of an object
 *
 * @param obj The Elementary object
 * @param part The text part name to get (NULL for the default label)
 * @return text of the label or NULL for any error
 *
 * @note Elementary objects may have many labels (e.g. Action Slider)
 *
 * @ingroup General
 */
EAPI const char                  *elm_object_part_text_get(const Evas_Object *obj, const char *part);

#define elm_object_text_get(obj) elm_object_part_text_get((obj), NULL)

/**
 * Set a content of an object
 *
 * @param obj The Elementary object
 * @param part The content part name to set (NULL for the default content)
 * @param content The new content of the object
 *
 * @note Elementary objects may have many contents
 * @deprecated Use elm_object_part_content_set instead.
 * @ingroup General
 */
EINA_DEPRECATED EAPI void         elm_object_content_part_set(Evas_Object *obj, const char *part, Evas_Object *content);

/**
 * Set a content of an object
 *
 * @param obj The Elementary object
 * @param part The content part name to set (NULL for the default content)
 * @param content The new content of the object
 *
 * @note Elementary objects may have many contents
 *
 * @ingroup General
 */
EAPI void                         elm_object_part_content_set(Evas_Object *obj, const char *part, Evas_Object *content);

#define elm_object_content_set(obj, content) elm_object_part_content_set((obj), NULL, (content))

/**
 * Get a content of an object
 *
 * @param obj The Elementary object
 * @param part The content part name to get (NULL for the default content)
 * @return content of the object or NULL for any error
 *
 * @note Elementary objects may have many contents
 * @deprecated Use elm_object_part_content_get instead.
 * @ingroup General
 */
EINA_DEPRECATED EAPI Evas_Object *elm_object_content_part_get(const Evas_Object *obj, const char *part);

/**
 * Get a content of an object
 *
 * @param obj The Elementary object
 * @param part The content part name to get (NULL for the default content)
 * @return content of the object or NULL for any error
 *
 * @note Elementary objects may have many contents
 *
 * @ingroup General
 */
EAPI Evas_Object                 *elm_object_part_content_get(const Evas_Object *obj, const char *part);

#define elm_object_content_get(obj) elm_object_part_content_get((obj), NULL)

/**
 * Unset a content of an object
 *
 * @param obj The Elementary object
 * @param part The content part name to unset (NULL for the default content)
 *
 * @note Elementary objects may have many contents
 * @deprecated Use elm_object_part_content_unset instead.
 * @ingroup General
 */
EINA_DEPRECATED EAPI Evas_Object *elm_object_content_part_unset(Evas_Object *obj, const char *part);

/**
 * Unset a content of an object
 *
 * @param obj The Elementary object
 * @param part The content part name to unset (NULL for the default content)
 *
 * @note Elementary objects may have many contents
 *
 * @ingroup General
 */
EAPI Evas_Object                 *elm_object_part_content_unset(Evas_Object *obj, const char *part);

#define elm_object_content_unset(obj) elm_object_part_content_unset((obj), NULL)

/**
 * Set the text to read out when in accessibility mode
 *
 * @param obj The object which is to be described
 * @param txt The text that describes the widget to people with poor or no vision
 *
 * @ingroup General
 */
EAPI void                         elm_object_access_info_set(Evas_Object *obj, const char *txt);

/**
 * Get a named object from the children
 *
 * @param obj The parent object whose children to look at
 * @param name The name of the child to find
 * @param recurse Set to thge maximum number of levels to recurse (0 == none, 1 is only look at 1 level of children etc.)
 * @return The found object of that name, or NULL if none is found
 *
 * This function searches the children (or recursively children of
 * children and so on) of the given @p obj object looking for a child with
 * the name of @p name. If the child is found the object is returned, or
 * NULL is returned. You can set the name of an object with
 * evas_object_name_set(). If the name is not unique within the child
 * objects (or the tree is @p recurse is greater than 0) then it is
 * undefined as to which child of that name is returned, so ensure the name
 * is unique amongst children. If recurse is set to -1 it will recurse
 * without limit.
 *
 * @ingroup General
 */
EAPI Evas_Object                 *elm_object_name_find(const Evas_Object *obj, const char *name, int recurse);

/**
 * @defgroup Styles Styles
 *
 * Widgets can have different styles of look. These generic API's
 * set styles of widgets, if they support them (and if the theme(s)
 * do).
 *
 * @ref general_functions_example_page "This" example contemplates
 * some of these functions.
 */

/**
 * Set the style to use by a widget
 *
 * Sets the style name that will define the appearance of a widget. Styles
 * vary from widget to widget and may also be defined by other themes
 * by means of extensions and overlays.
 *
 * @param obj The Elementary widget to style
 * @param style The style name to use
 *
 * @see elm_theme_extension_add()
 * @see elm_theme_extension_del()
 * @see elm_theme_overlay_add()
 * @see elm_theme_overlay_del()
 *
 * @ingroup Styles
 */
EAPI void
                  elm_object_style_set(Evas_Object *obj, const char *style)
EINA_ARG_NONNULL(1);

/**
 * Get the style used by the widget
 *
 * This gets the style being used for that widget. Note that the string
 * pointer is only valid as longas the object is valid and the style doesn't
 * change.
 *
 * @param obj The Elementary widget to query for its style
 * @return The style name used
 *
 * @see elm_object_style_set()
 *
 * @ingroup Styles
 */
EAPI const char  *elm_object_style_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Set the disabled state of an Elementary object.
 *
 * @param obj The Elementary object to operate on
 * @param disabled The state to put in in: @c EINA_TRUE for
 *        disabled, @c EINA_FALSE for enabled
 *
 * Elementary objects can be @b disabled, in which state they won't
 * receive input and, in general, will be themed differently from
 * their normal state, usually greyed out. Useful for contexts
 * where you don't want your users to interact with some of the
 * parts of you interface.
 *
 * This sets the state for the widget, either disabling it or
 * enabling it back.
 *
 * @ingroup Styles
 */
EAPI void         elm_object_disabled_set(Evas_Object *obj, Eina_Bool disabled) EINA_ARG_NONNULL(1);

/**
 * Get the disabled state of an Elementary object.
 *
 * @param obj The Elementary object to operate on
 * @return @c EINA_TRUE, if the widget is disabled, @c EINA_FALSE
 *            if it's enabled (or on errors)
 *
 * This gets the state of the widget, which might be enabled or disabled.
 *
 * @ingroup Styles
 */
EAPI Eina_Bool    elm_object_disabled_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * @defgroup WidgetNavigation Widget Tree Navigation.
 *
 * How to check if an Evas Object is an Elementary widget? How to
 * get the first elementary widget that is parent of the given
 * object?  These are all covered in widget tree navigation.
 *
 * @ref general_functions_example_page "This" example contemplates
 * some of these functions.
 */

/**
 * Check if the given Evas Object is an Elementary widget.
 *
 * @param obj the object to query.
 * @return @c EINA_TRUE if it is an elementary widget variant,
 *         @c EINA_FALSE otherwise
 * @ingroup WidgetNavigation
 */
EAPI Eina_Bool    elm_object_widget_check(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Get the first parent of the given object that is an Elementary
 * widget.
 *
 * @param obj the Elementary object to query parent from.
 * @return the parent object that is an Elementary widget, or @c
 *         NULL, if it was not found.
 *
 * Use this to query for an object's parent widget.
 *
 * @note Most of Elementary users wouldn't be mixing non-Elementary
 * smart objects in the objects tree of an application, as this is
 * an advanced usage of Elementary with Evas. So, except for the
 * application's window, which is the root of that tree, all other
 * objects would have valid Elementary widget parents.
 *
 * @ingroup WidgetNavigation
 */
EAPI Evas_Object *elm_object_parent_widget_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Get the top level parent of an Elementary widget.
 *
 * @param obj The object to query.
 * @return The top level Elementary widget, or @c NULL if parent cannot be
 * found.
 * @ingroup WidgetNavigation
 */
EAPI Evas_Object *elm_object_top_widget_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Get the string that represents this Elementary widget.
 *
 * @note Elementary is weird and exposes itself as a single
 *       Evas_Object_Smart_Class of type "elm_widget", so
 *       evas_object_type_get() always return that, making debug and
 *       language bindings hard. This function tries to mitigate this
 *       problem, but the solution is to change Elementary to use
 *       proper inheritance.
 *
 * @param obj the object to query.
 * @return Elementary widget name, or @c NULL if not a valid widget.
 * @ingroup WidgetNavigation
 */
EAPI const char  *elm_object_widget_type_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Send a signal to the widget edje object.
 *
 * This function sends a signal to the edje object of the obj. An
 * edje program can respond to a signal by specifying matching
 * 'signal' and 'source' fields.
 *
 * @param obj The object
 * @param emission The signal's name.
 * @param source The signal's source.
 * @ingroup General
 */
EAPI void         elm_object_signal_emit(Evas_Object *obj, const char *emission, const char *source) EINA_ARG_NONNULL(1);

/**
 * Add a callback for a signal emitted by widget edje object.
 *
 * This function connects a callback function to a signal emitted by the
 * edje object of the obj.
 * Globs can occur in either the emission or source name.
 *
 * @param obj The object
 * @param emission The signal's name.
 * @param source The signal's source.
 * @param func The callback function to be executed when the signal is
 * emitted.
 * @param data A pointer to data to pass in to the callback function.
 * @ingroup General
 */
EAPI void         elm_object_signal_callback_add(Evas_Object *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data) EINA_ARG_NONNULL(1, 4);

/**
 * Remove a signal-triggered callback from a widget edje object.
 *
 * This function removes a callback, previoulsy attached to a
 * signal emitted by the edje object of the obj.  The parameters
 * emission, source and func must match exactly those passed to a
 * previous call to elm_object_signal_callback_add(). The data
 * pointer that was passed to this call will be returned.
 *
 * @param obj The object
 * @param emission The signal's name.
 * @param source The signal's source.
 * @param func The callback function to be executed when the signal is
 * emitted.
 * @return The data pointer
 * @ingroup General
 */
EAPI void        *elm_object_signal_callback_del(Evas_Object *obj, const char *emission, const char *source, Edje_Signal_Cb func) EINA_ARG_NONNULL(1, 4);

/**
 * Add a callback for input events (key up, key down, mouse wheel)
 * on a given Elementary widget
 *
 * @param obj The widget to add an event callback on
 * @param func The callback function to be executed when the event
 * happens
 * @param data Data to pass in to @p func
 *
 * Every widget in an Elementary interface set to receive focus,
 * with elm_object_focus_allow_set(), will propagate @b all of its
 * key up, key down and mouse wheel input events up to its parent
 * object, and so on. All of the focusable ones in this chain which
 * had an event callback set, with this call, will be able to treat
 * those events. There are two ways of making the propagation of
 * these event upwards in the tree of widgets to @b cease:
 * - Just return @c EINA_TRUE on @p func. @c EINA_FALSE will mean
 *   the event was @b not processed, so the propagation will go on.
 * - The @c event_info pointer passed to @p func will contain the
 *   event's structure and, if you OR its @c event_flags inner
 *   value to @c EVAS_EVENT_FLAG_ON_HOLD, you're telling Elementary
 *   one has already handled it, thus killing the event's
 *   propagation, too.
 *
 * @note Your event callback will be issued on those events taking
 * place only if no other child widget of @p obj has consumed the
 * event already.
 *
 * @note Not to be confused with @c
 * evas_object_event_callback_add(), which will add event callbacks
 * per type on general Evas objects (no event propagation
 * infrastructure taken in account).
 *
 * @note Not to be confused with @c
 * elm_object_signal_callback_add(), which will add callbacks to @b
 * signals coming from a widget's theme, not input events.
 *
 * @note Not to be confused with @c
 * edje_object_signal_callback_add(), which does the same as
 * elm_object_signal_callback_add(), but directly on an Edje
 * object.
 *
 * @note Not to be confused with @c
 * evas_object_smart_callback_add(), which adds callbacks to smart
 * objects' <b>smart events</b>, and not input events.
 *
 * @see elm_object_event_callback_del()
 *
 * @ingroup General
 */
EAPI void         elm_object_event_callback_add(Evas_Object *obj, Elm_Event_Cb func, const void *data) EINA_ARG_NONNULL(1, 2);

/**
 * Remove an event callback from a widget.
 *
 * This function removes a callback, previoulsy attached to event emission
 * by the @p obj.
 * The parameters func and data must match exactly those passed to
 * a previous call to elm_object_event_callback_add(). The data pointer that
 * was passed to this call will be returned.
 *
 * @param obj The object
 * @param func The callback function to be executed when the event is
 * emitted.
 * @param data Data to pass in to the callback function.
 * @return The data pointer
 * @ingroup General
 */
EAPI void        *elm_object_event_callback_del(Evas_Object *obj, Elm_Event_Cb func, const void *data) EINA_ARG_NONNULL(1, 2);
