/* Generated code for Python module 'GUI_Function$Visualise$figure_sync_plot'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_GUI_Function$Visualise$figure_sync_plot" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_GUI_Function$Visualise$figure_sync_plot;
PyDictObject *moduledict_GUI_Function$Visualise$figure_sync_plot;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[133];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[133];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("GUI_Function.Visualise.figure_sync_plot"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 133; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_GUI_Function$Visualise$figure_sync_plot(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 133; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Visualise$figure_sync_plot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Visualise$figure_sync_plot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[132]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Visualise$figure_sync_plot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[132])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[132])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[132]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[132]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[132]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$_ndarray(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Visualise$figure_sync_plot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Visualise$figure_sync_plot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[124]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Visualise$figure_sync_plot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[124])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[124], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[124])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[124], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[124]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[124]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[124]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$_plt_rcParams_config(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Visualise$figure_sync_plot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Visualise$figure_sync_plot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[57]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Visualise$figure_sync_plot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[57]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[57]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[57]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5588cf4c9f4a9364bd82be8832e6a321;
static PyCodeObject *code_objects_8a6b2005c4442bdf0a2e0144c3921fb2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[129]); CHECK_OBJECT(module_filename_obj);
    code_objects_5588cf4c9f4a9364bd82be8832e6a321 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[130], mod_consts[130], NULL, NULL, 0, 0, 0);
    code_objects_8a6b2005c4442bdf0a2e0144c3921fb2 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[131], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_figure = NULL;
    PyObject *var_figsize = NULL;
    PyObject *var_ax = NULL;
    PyObject *var_xlim = NULL;
    PyObject *var_ylim = NULL;
    PyObject *var_title = NULL;
    PyObject *var_axtitle = NULL;
    PyObject *var_linecolor = NULL;
    PyObject *var_linestyle = NULL;
    PyObject *var_linewidth = NULL;
    PyObject *var_IsHoldOn = NULL;
    PyObject *var_IsGrid = NULL;
    PyObject *var_IsAnnotate = NULL;
    PyObject *var_IsTightLayout = NULL;
    PyObject *var_IsMergeLegend = NULL;
    PyObject *var_IsSTI = NULL;
    PyObject *var_xlabel = NULL;
    PyObject *var_ylabel = NULL;
    PyObject *var_unit_x = NULL;
    PyObject *var_unit_y = NULL;
    PyObject *var_fontsize_title = NULL;
    PyObject *var_fontsize_subtitle = NULL;
    PyObject *var_fontsize_label = NULL;
    PyObject *var_fontsize_legend = NULL;
    PyObject *var_fontsize_tick = NULL;
    PyObject *var_fontsize_annotate = NULL;
    PyObject *var_fontsize = NULL;
    PyObject *var_tick_x_color = NULL;
    PyObject *var_tick_y_color = NULL;
    PyObject *var_label_x_color = NULL;
    PyObject *var_label_y_color = NULL;
    PyObject *var_grid_color = NULL;
    PyObject *var_annotate_color = NULL;
    PyObject *var_legend_label = NULL;
    PyObject *var_legend_loc = NULL;
    PyObject *var_legend_title = NULL;
    PyObject *var_legend_frameon = NULL;
    PyObject *var_legend_ncol = NULL;
    PyObject *var_annotate_text = NULL;
    PyObject *var_annotate_index = NULL;
    PyObject *var_annotate_point = NULL;
    PyObject *var_annotate_loc = NULL;
    PyObject *var_annotate_loc_abs = NULL;
    PyObject *var_fontstyle = NULL;
    PyObject *var_index = NULL;
    PyObject *var_STI_point = NULL;
    PyObject *var_legend_lines = NULL;
    PyObject *var_legend_labels = NULL;
    PyObject *var_ax_i = NULL;
    PyObject *var_legend_line = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[0];
        tmp_assign_source_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_1 == NULL) {
            tmp_assign_source_1 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_1);
        }
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_figure == NULL);
        var_figure = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_2 = par_kwargs;
        tmp_key_value_2 = mod_consts[1];
        tmp_assign_source_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_2 == NULL) {
            tmp_assign_source_2 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_2);
        }
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_figsize == NULL);
        var_figsize = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_3 = par_kwargs;
        tmp_key_value_3 = mod_consts[2];
        tmp_assign_source_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_assign_source_3 == NULL) {
            tmp_assign_source_3 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_3);
        }
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_ax == NULL);
        var_ax = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_4 = par_kwargs;
        tmp_key_value_4 = mod_consts[3];
        tmp_default_value_1 = Py_None;
        tmp_assign_source_4 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_assign_source_4 == NULL) {
            tmp_assign_source_4 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_4);
        }
        assert(!(tmp_assign_source_4 == NULL));
        assert(var_xlim == NULL);
        var_xlim = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_default_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_5 = par_kwargs;
        tmp_key_value_5 = mod_consts[4];
        tmp_default_value_2 = Py_None;
        tmp_assign_source_5 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_assign_source_5 == NULL) {
            tmp_assign_source_5 = tmp_default_value_2;
            Py_INCREF(tmp_assign_source_5);
        }
        assert(!(tmp_assign_source_5 == NULL));
        assert(var_ylim == NULL);
        var_ylim = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_6 = par_kwargs;
        tmp_key_value_6 = mod_consts[5];
        tmp_assign_source_6 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_assign_source_6 == NULL) {
            tmp_assign_source_6 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_6);
        }
        assert(!(tmp_assign_source_6 == NULL));
        assert(var_title == NULL);
        var_title = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_key_value_7;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_7 = par_kwargs;
        tmp_key_value_7 = mod_consts[6];
        tmp_assign_source_7 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
        if (tmp_assign_source_7 == NULL) {
            tmp_assign_source_7 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_7);
        }
        assert(!(tmp_assign_source_7 == NULL));
        assert(var_axtitle == NULL);
        var_axtitle = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        PyObject *tmp_default_value_3;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_8 = par_kwargs;
        tmp_key_value_8 = mod_consts[7];
        tmp_default_value_3 = mod_consts[8];
        tmp_assign_source_8 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_8 == NULL) {
            tmp_assign_source_8 = tmp_default_value_3;
            Py_INCREF(tmp_assign_source_8);
        }
        assert(!(tmp_assign_source_8 == NULL));
        assert(var_linecolor == NULL);
        var_linecolor = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_key_value_9;
        PyObject *tmp_default_value_4;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_9 = par_kwargs;
        tmp_key_value_9 = mod_consts[9];
        tmp_default_value_4 = mod_consts[10];
        tmp_assign_source_9 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_9, tmp_key_value_9);
        if (tmp_assign_source_9 == NULL) {
            tmp_assign_source_9 = tmp_default_value_4;
            Py_INCREF(tmp_assign_source_9);
        }
        assert(!(tmp_assign_source_9 == NULL));
        assert(var_linestyle == NULL);
        var_linestyle = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_key_value_10;
        PyObject *tmp_default_value_5;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_10 = par_kwargs;
        tmp_key_value_10 = mod_consts[11];
        tmp_default_value_5 = const_int_pos_1;
        tmp_assign_source_10 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_10, tmp_key_value_10);
        if (tmp_assign_source_10 == NULL) {
            tmp_assign_source_10 = tmp_default_value_5;
            Py_INCREF(tmp_assign_source_10);
        }
        assert(!(tmp_assign_source_10 == NULL));
        assert(var_linewidth == NULL);
        var_linewidth = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        PyObject *tmp_default_value_6;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_11 = par_kwargs;
        tmp_key_value_11 = mod_consts[12];
        tmp_default_value_6 = Py_False;
        tmp_assign_source_11 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_assign_source_11 == NULL) {
            tmp_assign_source_11 = tmp_default_value_6;
            Py_INCREF(tmp_assign_source_11);
        }
        assert(!(tmp_assign_source_11 == NULL));
        assert(var_IsHoldOn == NULL);
        var_IsHoldOn = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_arg_value_12;
        PyObject *tmp_key_value_12;
        PyObject *tmp_default_value_7;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_12 = par_kwargs;
        tmp_key_value_12 = mod_consts[13];
        tmp_default_value_7 = Py_True;
        tmp_assign_source_12 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_12, tmp_key_value_12);
        if (tmp_assign_source_12 == NULL) {
            tmp_assign_source_12 = tmp_default_value_7;
            Py_INCREF(tmp_assign_source_12);
        }
        assert(!(tmp_assign_source_12 == NULL));
        assert(var_IsGrid == NULL);
        var_IsGrid = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_key_value_13;
        PyObject *tmp_default_value_8;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_13 = par_kwargs;
        tmp_key_value_13 = mod_consts[14];
        tmp_default_value_8 = Py_False;
        tmp_assign_source_13 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_13, tmp_key_value_13);
        if (tmp_assign_source_13 == NULL) {
            tmp_assign_source_13 = tmp_default_value_8;
            Py_INCREF(tmp_assign_source_13);
        }
        assert(!(tmp_assign_source_13 == NULL));
        assert(var_IsAnnotate == NULL);
        var_IsAnnotate = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        PyObject *tmp_default_value_9;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_14 = par_kwargs;
        tmp_key_value_14 = mod_consts[15];
        tmp_default_value_9 = Py_False;
        tmp_assign_source_14 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_assign_source_14 == NULL) {
            tmp_assign_source_14 = tmp_default_value_9;
            Py_INCREF(tmp_assign_source_14);
        }
        assert(!(tmp_assign_source_14 == NULL));
        assert(var_IsTightLayout == NULL);
        var_IsTightLayout = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_arg_value_15;
        PyObject *tmp_key_value_15;
        PyObject *tmp_default_value_10;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_15 = par_kwargs;
        tmp_key_value_15 = mod_consts[16];
        tmp_default_value_10 = Py_False;
        tmp_assign_source_15 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_15, tmp_key_value_15);
        if (tmp_assign_source_15 == NULL) {
            tmp_assign_source_15 = tmp_default_value_10;
            Py_INCREF(tmp_assign_source_15);
        }
        assert(!(tmp_assign_source_15 == NULL));
        assert(var_IsMergeLegend == NULL);
        var_IsMergeLegend = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_key_value_16;
        PyObject *tmp_default_value_11;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_16 = par_kwargs;
        tmp_key_value_16 = mod_consts[17];
        tmp_default_value_11 = Py_False;
        tmp_assign_source_16 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_16, tmp_key_value_16);
        if (tmp_assign_source_16 == NULL) {
            tmp_assign_source_16 = tmp_default_value_11;
            Py_INCREF(tmp_assign_source_16);
        }
        assert(!(tmp_assign_source_16 == NULL));
        assert(var_IsSTI == NULL);
        var_IsSTI = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        PyObject *tmp_default_value_12;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_17 = par_kwargs;
        tmp_key_value_17 = mod_consts[18];
        tmp_default_value_12 = mod_consts[19];
        tmp_assign_source_17 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_assign_source_17 == NULL) {
            tmp_assign_source_17 = tmp_default_value_12;
            Py_INCREF(tmp_assign_source_17);
        }
        assert(!(tmp_assign_source_17 == NULL));
        assert(var_xlabel == NULL);
        var_xlabel = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dict_arg_value_18;
        PyObject *tmp_key_value_18;
        PyObject *tmp_default_value_13;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_18 = par_kwargs;
        tmp_key_value_18 = mod_consts[20];
        tmp_default_value_13 = mod_consts[21];
        tmp_assign_source_18 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_18, tmp_key_value_18);
        if (tmp_assign_source_18 == NULL) {
            tmp_assign_source_18 = tmp_default_value_13;
            Py_INCREF(tmp_assign_source_18);
        }
        assert(!(tmp_assign_source_18 == NULL));
        assert(var_ylabel == NULL);
        var_ylabel = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_key_value_19;
        PyObject *tmp_default_value_14;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_19 = par_kwargs;
        tmp_key_value_19 = mod_consts[22];
        tmp_default_value_14 = mod_consts[23];
        tmp_assign_source_19 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_19, tmp_key_value_19);
        if (tmp_assign_source_19 == NULL) {
            tmp_assign_source_19 = tmp_default_value_14;
            Py_INCREF(tmp_assign_source_19);
        }
        assert(!(tmp_assign_source_19 == NULL));
        assert(var_unit_x == NULL);
        var_unit_x = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        PyObject *tmp_default_value_15;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_20 = par_kwargs;
        tmp_key_value_20 = mod_consts[24];
        tmp_default_value_15 = mod_consts[25];
        tmp_assign_source_20 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_assign_source_20 == NULL) {
            tmp_assign_source_20 = tmp_default_value_15;
            Py_INCREF(tmp_assign_source_20);
        }
        assert(!(tmp_assign_source_20 == NULL));
        assert(var_unit_y == NULL);
        var_unit_y = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dict_arg_value_21;
        PyObject *tmp_key_value_21;
        PyObject *tmp_default_value_16;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_21 = par_kwargs;
        tmp_key_value_21 = mod_consts[26];
        tmp_default_value_16 = mod_consts[27];
        tmp_assign_source_21 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_21, tmp_key_value_21);
        if (tmp_assign_source_21 == NULL) {
            tmp_assign_source_21 = tmp_default_value_16;
            Py_INCREF(tmp_assign_source_21);
        }
        assert(!(tmp_assign_source_21 == NULL));
        assert(var_fontsize_title == NULL);
        var_fontsize_title = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_key_value_22;
        PyObject *tmp_default_value_17;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_22 = par_kwargs;
        tmp_key_value_22 = mod_consts[28];
        tmp_default_value_17 = mod_consts[29];
        tmp_assign_source_22 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_22, tmp_key_value_22);
        if (tmp_assign_source_22 == NULL) {
            tmp_assign_source_22 = tmp_default_value_17;
            Py_INCREF(tmp_assign_source_22);
        }
        assert(!(tmp_assign_source_22 == NULL));
        assert(var_fontsize_subtitle == NULL);
        var_fontsize_subtitle = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        PyObject *tmp_default_value_18;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_23 = par_kwargs;
        tmp_key_value_23 = mod_consts[30];
        tmp_default_value_18 = mod_consts[31];
        tmp_assign_source_23 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_assign_source_23 == NULL) {
            tmp_assign_source_23 = tmp_default_value_18;
            Py_INCREF(tmp_assign_source_23);
        }
        assert(!(tmp_assign_source_23 == NULL));
        assert(var_fontsize_label == NULL);
        var_fontsize_label = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_arg_value_24;
        PyObject *tmp_key_value_24;
        PyObject *tmp_default_value_19;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_24 = par_kwargs;
        tmp_key_value_24 = mod_consts[32];
        tmp_default_value_19 = mod_consts[31];
        tmp_assign_source_24 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_24, tmp_key_value_24);
        if (tmp_assign_source_24 == NULL) {
            tmp_assign_source_24 = tmp_default_value_19;
            Py_INCREF(tmp_assign_source_24);
        }
        assert(!(tmp_assign_source_24 == NULL));
        assert(var_fontsize_legend == NULL);
        var_fontsize_legend = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_key_value_25;
        PyObject *tmp_default_value_20;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_25 = par_kwargs;
        tmp_key_value_25 = mod_consts[33];
        tmp_default_value_20 = mod_consts[31];
        tmp_assign_source_25 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_25, tmp_key_value_25);
        if (tmp_assign_source_25 == NULL) {
            tmp_assign_source_25 = tmp_default_value_20;
            Py_INCREF(tmp_assign_source_25);
        }
        assert(!(tmp_assign_source_25 == NULL));
        assert(var_fontsize_tick == NULL);
        var_fontsize_tick = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        PyObject *tmp_default_value_21;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_26 = par_kwargs;
        tmp_key_value_26 = mod_consts[34];
        tmp_default_value_21 = mod_consts[31];
        tmp_assign_source_26 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_assign_source_26 == NULL) {
            tmp_assign_source_26 = tmp_default_value_21;
            Py_INCREF(tmp_assign_source_26);
        }
        assert(!(tmp_assign_source_26 == NULL));
        assert(var_fontsize_annotate == NULL);
        var_fontsize_annotate = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_arg_value_27;
        PyObject *tmp_key_value_27;
        PyObject *tmp_default_value_22;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_27 = par_kwargs;
        tmp_key_value_27 = mod_consts[35];
        tmp_default_value_22 = mod_consts[36];
        tmp_assign_source_27 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_27, tmp_key_value_27);
        if (tmp_assign_source_27 == NULL) {
            tmp_assign_source_27 = tmp_default_value_22;
            Py_INCREF(tmp_assign_source_27);
        }
        assert(!(tmp_assign_source_27 == NULL));
        assert(var_fontsize == NULL);
        var_fontsize = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dict_arg_value_28;
        PyObject *tmp_key_value_28;
        PyObject *tmp_default_value_23;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_28 = par_kwargs;
        tmp_key_value_28 = mod_consts[37];
        tmp_default_value_23 = mod_consts[8];
        tmp_assign_source_28 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_28, tmp_key_value_28);
        if (tmp_assign_source_28 == NULL) {
            tmp_assign_source_28 = tmp_default_value_23;
            Py_INCREF(tmp_assign_source_28);
        }
        assert(!(tmp_assign_source_28 == NULL));
        assert(var_tick_x_color == NULL);
        var_tick_x_color = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_arg_value_29;
        PyObject *tmp_key_value_29;
        PyObject *tmp_default_value_24;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_29 = par_kwargs;
        tmp_key_value_29 = mod_consts[38];
        tmp_default_value_24 = mod_consts[8];
        tmp_assign_source_29 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_29, tmp_key_value_29);
        if (tmp_assign_source_29 == NULL) {
            tmp_assign_source_29 = tmp_default_value_24;
            Py_INCREF(tmp_assign_source_29);
        }
        assert(!(tmp_assign_source_29 == NULL));
        assert(var_tick_y_color == NULL);
        var_tick_y_color = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dict_arg_value_30;
        PyObject *tmp_key_value_30;
        PyObject *tmp_default_value_25;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_30 = par_kwargs;
        tmp_key_value_30 = mod_consts[39];
        tmp_default_value_25 = mod_consts[8];
        tmp_assign_source_30 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_30, tmp_key_value_30);
        if (tmp_assign_source_30 == NULL) {
            tmp_assign_source_30 = tmp_default_value_25;
            Py_INCREF(tmp_assign_source_30);
        }
        assert(!(tmp_assign_source_30 == NULL));
        assert(var_label_x_color == NULL);
        var_label_x_color = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_arg_value_31;
        PyObject *tmp_key_value_31;
        PyObject *tmp_default_value_26;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_31 = par_kwargs;
        tmp_key_value_31 = mod_consts[40];
        tmp_default_value_26 = mod_consts[8];
        tmp_assign_source_31 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_31, tmp_key_value_31);
        if (tmp_assign_source_31 == NULL) {
            tmp_assign_source_31 = tmp_default_value_26;
            Py_INCREF(tmp_assign_source_31);
        }
        assert(!(tmp_assign_source_31 == NULL));
        assert(var_label_y_color == NULL);
        var_label_y_color = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dict_arg_value_32;
        PyObject *tmp_key_value_32;
        PyObject *tmp_default_value_27;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_32 = par_kwargs;
        tmp_key_value_32 = mod_consts[41];
        tmp_default_value_27 = mod_consts[42];
        tmp_assign_source_32 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_32, tmp_key_value_32);
        if (tmp_assign_source_32 == NULL) {
            tmp_assign_source_32 = tmp_default_value_27;
            Py_INCREF(tmp_assign_source_32);
        }
        assert(!(tmp_assign_source_32 == NULL));
        assert(var_grid_color == NULL);
        var_grid_color = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dict_arg_value_33;
        PyObject *tmp_key_value_33;
        PyObject *tmp_default_value_28;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_33 = par_kwargs;
        tmp_key_value_33 = mod_consts[43];
        tmp_default_value_28 = mod_consts[42];
        tmp_assign_source_33 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_33, tmp_key_value_33);
        if (tmp_assign_source_33 == NULL) {
            tmp_assign_source_33 = tmp_default_value_28;
            Py_INCREF(tmp_assign_source_33);
        }
        assert(!(tmp_assign_source_33 == NULL));
        assert(var_annotate_color == NULL);
        var_annotate_color = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dict_arg_value_34;
        PyObject *tmp_key_value_34;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_34 = par_kwargs;
        tmp_key_value_34 = mod_consts[44];
        tmp_assign_source_34 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_34, tmp_key_value_34);
        if (tmp_assign_source_34 == NULL) {
            tmp_assign_source_34 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_34);
        }
        assert(!(tmp_assign_source_34 == NULL));
        assert(var_legend_label == NULL);
        var_legend_label = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_arg_value_35;
        PyObject *tmp_key_value_35;
        PyObject *tmp_default_value_29;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_35 = par_kwargs;
        tmp_key_value_35 = mod_consts[45];
        tmp_default_value_29 = mod_consts[46];
        tmp_assign_source_35 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_35, tmp_key_value_35);
        if (tmp_assign_source_35 == NULL) {
            tmp_assign_source_35 = tmp_default_value_29;
            Py_INCREF(tmp_assign_source_35);
        }
        assert(!(tmp_assign_source_35 == NULL));
        assert(var_legend_loc == NULL);
        var_legend_loc = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_arg_value_36;
        PyObject *tmp_key_value_36;
        PyObject *tmp_default_value_30;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_36 = par_kwargs;
        tmp_key_value_36 = mod_consts[47];
        tmp_default_value_30 = mod_consts[48];
        tmp_assign_source_36 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_36, tmp_key_value_36);
        if (tmp_assign_source_36 == NULL) {
            tmp_assign_source_36 = tmp_default_value_30;
            Py_INCREF(tmp_assign_source_36);
        }
        assert(!(tmp_assign_source_36 == NULL));
        assert(var_legend_title == NULL);
        var_legend_title = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dict_arg_value_37;
        PyObject *tmp_key_value_37;
        PyObject *tmp_default_value_31;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_37 = par_kwargs;
        tmp_key_value_37 = mod_consts[49];
        tmp_default_value_31 = Py_True;
        tmp_assign_source_37 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_37, tmp_key_value_37);
        if (tmp_assign_source_37 == NULL) {
            tmp_assign_source_37 = tmp_default_value_31;
            Py_INCREF(tmp_assign_source_37);
        }
        assert(!(tmp_assign_source_37 == NULL));
        assert(var_legend_frameon == NULL);
        var_legend_frameon = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dict_arg_value_38;
        PyObject *tmp_key_value_38;
        PyObject *tmp_default_value_32;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_38 = par_kwargs;
        tmp_key_value_38 = mod_consts[50];
        tmp_default_value_32 = const_int_pos_1;
        tmp_assign_source_38 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_38, tmp_key_value_38);
        if (tmp_assign_source_38 == NULL) {
            tmp_assign_source_38 = tmp_default_value_32;
            Py_INCREF(tmp_assign_source_38);
        }
        assert(!(tmp_assign_source_38 == NULL));
        assert(var_legend_ncol == NULL);
        var_legend_ncol = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dict_arg_value_39;
        PyObject *tmp_key_value_39;
        PyObject *tmp_default_value_33;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_39 = par_kwargs;
        tmp_key_value_39 = mod_consts[51];
        tmp_default_value_33 = mod_consts[52];
        tmp_assign_source_39 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_39, tmp_key_value_39);
        if (tmp_assign_source_39 == NULL) {
            tmp_assign_source_39 = tmp_default_value_33;
            Py_INCREF(tmp_assign_source_39);
        }
        assert(!(tmp_assign_source_39 == NULL));
        assert(var_annotate_text == NULL);
        var_annotate_text = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dict_arg_value_40;
        PyObject *tmp_key_value_40;
        PyObject *tmp_default_value_34;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_40 = par_kwargs;
        tmp_key_value_40 = mod_consts[53];
        tmp_default_value_34 = const_int_0;
        tmp_assign_source_40 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_40, tmp_key_value_40);
        if (tmp_assign_source_40 == NULL) {
            tmp_assign_source_40 = tmp_default_value_34;
            Py_INCREF(tmp_assign_source_40);
        }
        assert(!(tmp_assign_source_40 == NULL));
        assert(var_annotate_index == NULL);
        var_annotate_index = tmp_assign_source_40;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot)) {
        Py_XDECREF(cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot = MAKE_FUNCTION_FRAME(tstate, code_objects_8a6b2005c4442bdf0a2e0144c3921fb2, module_GUI_Function$Visualise$figure_sync_plot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_type_description == NULL);
    frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot = cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot);
    assert(Py_REFCNT(frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        CHECK_OBJECT(var_annotate_index);
        tmp_subscript_value_1 = var_annotate_index;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_y);
            tmp_expression_value_2 = par_y;
            CHECK_OBJECT(var_annotate_index);
            tmp_subscript_value_2 = var_annotate_index;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 73;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_41, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_41);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_annotate_point == NULL);
        var_annotate_point = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dict_arg_value_41;
        PyObject *tmp_key_value_41;
        PyObject *tmp_default_value_35;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_41 = par_kwargs;
        tmp_key_value_41 = mod_consts[54];
        tmp_default_value_35 = mod_consts[55];
        tmp_assign_source_42 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_41, tmp_key_value_41);
        if (tmp_assign_source_42 == NULL) {
            tmp_assign_source_42 = tmp_default_value_35;
            Py_INCREF(tmp_assign_source_42);
        }
        assert(!(tmp_assign_source_42 == NULL));
        assert(var_annotate_loc == NULL);
        var_annotate_loc = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_annotate_point);
        tmp_expression_value_3 = var_annotate_point;
        tmp_subscript_value_3 = const_int_0;
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_annotate_loc);
        tmp_expression_value_4 = var_annotate_loc;
        tmp_subscript_value_4 = const_int_0;
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 0);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_annotate_point);
            tmp_expression_value_5 = var_annotate_point;
            tmp_subscript_value_5 = const_int_pos_1;
            tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_5, 1);
            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 75;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_annotate_loc);
            tmp_expression_value_6 = var_annotate_loc;
            tmp_subscript_value_6 = const_int_pos_1;
            tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_6, 1);
            if (tmp_add_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 75;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 75;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_43, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_43);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_annotate_loc_abs == NULL);
        var_annotate_loc_abs = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dict_arg_value_42;
        PyObject *tmp_key_value_42;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_42 = par_kwargs;
        tmp_key_value_42 = mod_consts[56];
        tmp_assign_source_44 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_42, tmp_key_value_42);
        if (tmp_assign_source_44 == NULL) {
            tmp_assign_source_44 = Py_None;
            Py_INCREF_IMMORTAL(tmp_assign_source_44);
        }
        assert(!(tmp_assign_source_44 == NULL));
        assert(var_fontstyle == NULL);
        var_fontstyle = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_fontstyle);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_fontstyle);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$_plt_rcParams_config(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fontstyle);
        tmp_kw_call_value_0_1 = var_fontstyle;
        CHECK_OBJECT(var_fontsize);
        tmp_kw_call_value_1_1 = var_fontsize;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 82;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[58]);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_figsize);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_figsize);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_figure);
        tmp_expression_value_7 = var_figure;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[59]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_figsize);
        tmp_expression_value_8 = var_figsize;
        tmp_subscript_value_7 = const_int_0;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_7, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_figsize);
        tmp_expression_value_9 = var_figsize;
        tmp_subscript_value_8 = const_int_pos_1;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_8, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_IsHoldOn);
        tmp_operand_value_1 = var_IsHoldOn;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_ax);
        tmp_called_instance_1 = var_ax;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 90;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[60]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_IsSTI);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_IsSTI);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 95;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_45;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_46 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_46 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 95;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_47 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_50 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_50;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_51 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_STI_point;
            var_STI_point = tmp_assign_source_51;
            Py_INCREF(var_STI_point);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_ax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[61]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = var_ax;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[62]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_STI_point);
        tmp_kw_call_value_0_2 = var_STI_point;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[63]);
        assert(tmp_called_value_5 != NULL);
        if (par_y == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[64]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_y;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 96;
        tmp_kw_call_value_1_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[65]);
        assert(tmp_called_value_6 != NULL);
        if (par_y == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_1_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[64]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_y;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 96;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_1_2);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_linestyle == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[9]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_3_1 = var_linestyle;
        if (var_linecolor == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[7]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_4_1 = var_linecolor;
        CHECK_OBJECT(var_index);
        tmp_cmp_expr_left_1 = var_index;
        tmp_cmp_expr_right_1 = const_int_0;
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_1_2);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_legend_label);
        tmp_kw_call_value_5_1 = var_legend_label;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_kw_call_value_5_1 = mod_consts[48];
        condexpr_end_1:;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 96;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[66]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_1_2);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        if (var_ax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[61]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = var_ax;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[67]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 98;
        tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[69]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_title);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_title);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_figure);
        tmp_expression_value_12 = var_figure;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[70]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_title);
        tmp_kw_call_arg_value_0_1 = var_title;
        CHECK_OBJECT(var_fontsize_title);
        tmp_kw_call_dict_value_0_1 = var_fontsize_title;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 102;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_axtitle);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_axtitle);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_13 = var_ax;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[72]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_axtitle);
        tmp_kw_call_arg_value_0_2 = var_axtitle;
        CHECK_OBJECT(var_fontsize_subtitle);
        tmp_kw_call_dict_value_0_2 = var_fontsize_subtitle;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_14 = var_ax;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[73]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xlabel);
        tmp_format_value_1 = var_xlabel;
        tmp_format_spec_1 = mod_consts[48];
        tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[74];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_unit_x);
            tmp_format_value_2 = var_unit_x;
            tmp_format_spec_2 = mod_consts[48];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 105;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kw_call_arg_value_0_3 = PyUnicode_Join(mod_consts[48], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_label_x_color);
        tmp_kw_call_dict_value_0_3 = var_label_x_color;
        CHECK_OBJECT(var_fontsize_label);
        tmp_kw_call_dict_value_1_1 = var_fontsize_label;
        tmp_kw_call_dict_value_2_1 = mod_consts[76];
        tmp_kw_call_dict_value_3_1 = mod_consts[76];
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 105;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_format_value_3;
        PyObject *tmp_format_spec_3;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_15 = var_ax;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[78]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ylabel);
        tmp_format_value_3 = var_ylabel;
        tmp_format_spec_3 = mod_consts[48];
        tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[74];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
            CHECK_OBJECT(var_unit_y);
            tmp_format_value_4 = var_unit_y;
            tmp_format_spec_4 = mod_consts[48];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 106;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kw_call_arg_value_0_4 = PyUnicode_Join(mod_consts[48], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_label_y_color);
        tmp_kw_call_dict_value_0_4 = var_label_y_color;
        CHECK_OBJECT(var_fontsize_label);
        tmp_kw_call_dict_value_1_2 = var_fontsize_label;
        tmp_kw_call_dict_value_2_2 = mod_consts[76];
        tmp_kw_call_dict_value_3_2 = mod_consts[76];
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 106;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts[77]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_arg_value_0_4);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_16;
        tmp_assattr_value_1 = mod_consts[36];
        CHECK_OBJECT(var_ax);
        tmp_expression_value_16 = var_ax;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[79]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_17;
        tmp_assattr_value_2 = mod_consts[36];
        CHECK_OBJECT(var_ax);
        tmp_expression_value_17 = var_ax;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[81]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[80], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_18 = var_ax;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[82]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[83];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_19 = var_ax;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[79]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 110;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[84],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_20 = var_ax;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[82]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[86];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_21 = var_ax;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[81]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 113;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[84],
            PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_8:;
    branch_end_7:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_22 = var_ax;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[67]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tick_x_color);
        tmp_kw_call_value_0_3 = var_tick_x_color;
        CHECK_OBJECT(var_fontsize_tick);
        tmp_kw_call_value_1_3 = var_fontsize_tick;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 115;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};
            tmp_call_result_12 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, mod_consts[88], kw_values, mod_consts[89]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_23 = var_ax;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[67]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tick_y_color);
        tmp_kw_call_value_0_4 = var_tick_y_color;
        CHECK_OBJECT(var_fontsize_tick);
        tmp_kw_call_value_1_4 = var_fontsize_tick;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 116;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};
            tmp_call_result_13 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, mod_consts[90], kw_values, mod_consts[89]);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_3;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_24 = var_ax;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[91]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_kw_call_arg_value_0_5 = par_x;
        CHECK_OBJECT(par_y);
        tmp_kw_call_arg_value_1_1 = par_y;
        CHECK_OBJECT(var_legend_label);
        tmp_kw_call_dict_value_0_5 = var_legend_label;
        CHECK_OBJECT(var_linecolor);
        tmp_kw_call_dict_value_1_3 = var_linecolor;
        CHECK_OBJECT(var_linestyle);
        tmp_kw_call_dict_value_2_3 = var_linestyle;
        CHECK_OBJECT(var_linewidth);
        tmp_kw_call_dict_value_3_3 = var_linewidth;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 117;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[92]);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_6;
        CHECK_OBJECT(var_xlim);
        tmp_truth_name_6 = CHECK_IF_TRUE(var_xlim);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_25 = var_ax;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[93]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_26 = var_xlim;
        tmp_subscript_value_9 = const_int_0;
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_9, 0);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_27 = var_xlim;
        tmp_subscript_value_10 = const_int_pos_1;
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_10, 1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_7;
        CHECK_OBJECT(var_ylim);
        tmp_truth_name_7 = CHECK_IF_TRUE(var_ylim);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_28 = var_ax;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[94]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ylim);
        tmp_expression_value_29 = var_ylim;
        tmp_subscript_value_11 = const_int_0;
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_11, 0);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ylim);
        tmp_expression_value_30 = var_ylim;
        tmp_subscript_value_12 = const_int_pos_1;
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_12, 1);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_10:;
    branch_end_4:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_IsMergeLegend);
        tmp_truth_name_8 = CHECK_IF_TRUE(var_IsMergeLegend);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[95], "ll");
        tmp_assign_source_52 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_52 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_52;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_54;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_55 = tmp_tuple_unpack_2__element_1;
        assert(var_legend_lines == NULL);
        Py_INCREF(tmp_assign_source_55);
        var_legend_lines = tmp_assign_source_55;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_56 = tmp_tuple_unpack_2__element_2;
        assert(var_legend_labels == NULL);
        Py_INCREF(tmp_assign_source_56);
        var_legend_labels = tmp_assign_source_56;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(var_figure);
        tmp_expression_value_31 = var_figure;
        tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[96]);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_57;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_58 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_58 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 125;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_59 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_ax_i;
            var_ax_i = tmp_assign_source_59;
            Py_INCREF(var_ax_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_ax_i);
        tmp_called_instance_4 = var_ax_i;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 126;
        tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[97]);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_60 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_63 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_legend_line;
            var_legend_line = tmp_assign_source_63;
            Py_INCREF(var_legend_line);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_64 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_legend_label;
            var_legend_label = tmp_assign_source_64;
            Py_INCREF(var_legend_label);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (var_legend_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_add_expr_left_3 = var_legend_lines;
        CHECK_OBJECT(var_legend_line);
        tmp_add_expr_right_3 = var_legend_line;
        tmp_assign_source_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_legend_lines;
            var_legend_lines = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (var_legend_labels == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[99]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_add_expr_left_4 = var_legend_labels;
        CHECK_OBJECT(var_legend_label);
        tmp_add_expr_right_4 = var_legend_label;
        tmp_assign_source_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_legend_labels;
            var_legend_labels = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 125;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_kw_call_dict_value_2_4;
        PyObject *tmp_kw_call_dict_value_3_4;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        CHECK_OBJECT(var_figure);
        tmp_expression_value_34 = var_figure;
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[96]);
        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = const_int_0;
        tmp_expression_value_32 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_13, 0);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[100]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_legend_lines == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_6 = var_legend_lines;
        if (var_legend_labels == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[99]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = var_legend_labels;
        CHECK_OBJECT(var_legend_title);
        tmp_kw_call_dict_value_0_6 = var_legend_title;
        CHECK_OBJECT(var_fontsize_legend);
        tmp_kw_call_dict_value_1_4 = var_fontsize_legend;
        CHECK_OBJECT(var_legend_frameon);
        tmp_kw_call_dict_value_2_4 = var_legend_frameon;
        CHECK_OBJECT(var_legend_loc);
        tmp_kw_call_dict_value_3_4 = var_legend_loc;
        CHECK_OBJECT(var_legend_ncol);
        tmp_kw_call_dict_value_4_1 = var_legend_ncol;
        CHECK_OBJECT(var_fontsize_legend);
        tmp_kw_call_dict_value_5_1 = var_fontsize_legend;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 129;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4, tmp_kw_call_dict_value_3_4, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts[101]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto branch_end_11;
    branch_no_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_instance_5;
        if (var_ax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[61]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_instance_5 = var_ax;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 131;
        tmp_iter_arg_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[97]);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_67 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_67;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_69;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_70 = tmp_tuple_unpack_4__element_1;
        assert(var_legend_lines == NULL);
        Py_INCREF(tmp_assign_source_70);
        var_legend_lines = tmp_assign_source_70;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_71 = tmp_tuple_unpack_4__element_2;
        assert(var_legend_labels == NULL);
        Py_INCREF(tmp_assign_source_71);
        var_legend_labels = tmp_assign_source_71;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_kw_call_dict_value_2_5;
        PyObject *tmp_kw_call_dict_value_3_5;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_kw_call_dict_value_5_2;
        if (var_ax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[61]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = var_ax;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[100]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_legend_lines);
        tmp_kw_call_arg_value_0_7 = var_legend_lines;
        CHECK_OBJECT(var_legend_labels);
        tmp_kw_call_arg_value_1_3 = var_legend_labels;
        CHECK_OBJECT(var_legend_title);
        tmp_kw_call_dict_value_0_7 = var_legend_title;
        CHECK_OBJECT(var_fontsize_legend);
        tmp_kw_call_dict_value_1_5 = var_fontsize_legend;
        CHECK_OBJECT(var_legend_frameon);
        tmp_kw_call_dict_value_2_5 = var_legend_frameon;
        CHECK_OBJECT(var_legend_loc);
        tmp_kw_call_dict_value_3_5 = var_legend_loc;
        CHECK_OBJECT(var_legend_ncol);
        tmp_kw_call_dict_value_4_2 = var_legend_ncol;
        CHECK_OBJECT(var_fontsize_legend);
        tmp_kw_call_dict_value_5_2 = var_fontsize_legend;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 132;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_5, tmp_kw_call_dict_value_3_5, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_2};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts[101]);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_end_11:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_IsGrid);
        tmp_truth_name_9 = CHECK_IF_TRUE(var_IsGrid);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        if (var_ax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[61]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = var_ax;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[102]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[103];
        tmp_kw_call_value_1_5 = mod_consts[104];
        tmp_kw_call_value_2_2 = mod_consts[10];
        tmp_kw_call_value_3_2 = mod_consts[105];
        CHECK_OBJECT(var_grid_color);
        tmp_kw_call_value_4_2 = var_grid_color;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 137;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2};
            tmp_call_result_19 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_19, mod_consts[106], kw_values, mod_consts[107]);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_IsAnnotate);
        tmp_truth_name_10 = CHECK_IF_TRUE(var_IsAnnotate);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_6;
        PyObject *tmp_kw_call_dict_value_2_6;
        PyObject *tmp_kw_call_dict_value_3_6;
        PyObject *tmp_kw_call_dict_value_4_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (var_ax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[61]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_ax;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[108]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_annotate_text);
        tmp_kw_call_arg_value_0_8 = var_annotate_text;
        CHECK_OBJECT(var_annotate_point);
        tmp_kw_call_dict_value_0_8 = var_annotate_point;
        CHECK_OBJECT(var_annotate_loc_abs);
        tmp_kw_call_dict_value_1_6 = var_annotate_loc_abs;
        CHECK_OBJECT(var_fontsize_annotate);
        tmp_kw_call_dict_value_2_6 = var_fontsize_annotate;
        CHECK_OBJECT(var_annotate_color);
        tmp_kw_call_dict_value_3_6 = var_annotate_color;
        tmp_dict_key_1 = mod_consts[109];
        tmp_dict_value_1 = mod_consts[110];
        tmp_kw_call_dict_value_4_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_4_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[111];
        tmp_dict_value_1 = mod_consts[105];
        tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_4_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[112];
        CHECK_OBJECT(var_annotate_color);
        tmp_dict_value_1 = var_annotate_color;
        tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_4_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 139;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_6, tmp_kw_call_dict_value_2_6, tmp_kw_call_dict_value_3_6, tmp_kw_call_dict_value_4_3};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts[113]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_dict_value_4_3);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_11;
        CHECK_OBJECT(var_IsTightLayout);
        tmp_truth_name_11 = CHECK_IF_TRUE(var_IsTightLayout);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(var_figure);
        tmp_called_instance_6 = var_figure;
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame.f_lineno = 141;
        tmp_call_result_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[114]);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    branch_no_14:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot,
        type_description_1,
        par_x,
        par_y,
        par_args,
        par_kwargs,
        var_figure,
        var_figsize,
        var_ax,
        var_xlim,
        var_ylim,
        var_title,
        var_axtitle,
        var_linecolor,
        var_linestyle,
        var_linewidth,
        var_IsHoldOn,
        var_IsGrid,
        var_IsAnnotate,
        var_IsTightLayout,
        var_IsMergeLegend,
        var_IsSTI,
        var_xlabel,
        var_ylabel,
        var_unit_x,
        var_unit_y,
        var_fontsize_title,
        var_fontsize_subtitle,
        var_fontsize_label,
        var_fontsize_legend,
        var_fontsize_tick,
        var_fontsize_annotate,
        var_fontsize,
        var_tick_x_color,
        var_tick_y_color,
        var_label_x_color,
        var_label_y_color,
        var_grid_color,
        var_annotate_color,
        var_legend_label,
        var_legend_loc,
        var_legend_title,
        var_legend_frameon,
        var_legend_ncol,
        var_annotate_text,
        var_annotate_index,
        var_annotate_point,
        var_annotate_loc,
        var_annotate_loc_abs,
        var_fontstyle,
        var_index,
        var_STI_point,
        var_legend_lines,
        var_legend_labels,
        var_ax_i,
        var_legend_line
    );


    // Release cached frame if used for exception.
    if (frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot == cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot);
        cache_frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot = NULL;
    }

    assertFrameObject(frame_frame_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_figure);
    Py_DECREF(var_figure);
    var_figure = NULL;
    CHECK_OBJECT(var_figsize);
    Py_DECREF(var_figsize);
    var_figsize = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    CHECK_OBJECT(var_xlim);
    Py_DECREF(var_xlim);
    var_xlim = NULL;
    CHECK_OBJECT(var_ylim);
    Py_DECREF(var_ylim);
    var_ylim = NULL;
    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;
    CHECK_OBJECT(var_axtitle);
    Py_DECREF(var_axtitle);
    var_axtitle = NULL;
    Py_XDECREF(var_linecolor);
    var_linecolor = NULL;
    Py_XDECREF(var_linestyle);
    var_linestyle = NULL;
    CHECK_OBJECT(var_linewidth);
    Py_DECREF(var_linewidth);
    var_linewidth = NULL;
    CHECK_OBJECT(var_IsHoldOn);
    Py_DECREF(var_IsHoldOn);
    var_IsHoldOn = NULL;
    CHECK_OBJECT(var_IsGrid);
    Py_DECREF(var_IsGrid);
    var_IsGrid = NULL;
    CHECK_OBJECT(var_IsAnnotate);
    Py_DECREF(var_IsAnnotate);
    var_IsAnnotate = NULL;
    CHECK_OBJECT(var_IsTightLayout);
    Py_DECREF(var_IsTightLayout);
    var_IsTightLayout = NULL;
    CHECK_OBJECT(var_IsMergeLegend);
    Py_DECREF(var_IsMergeLegend);
    var_IsMergeLegend = NULL;
    CHECK_OBJECT(var_IsSTI);
    Py_DECREF(var_IsSTI);
    var_IsSTI = NULL;
    CHECK_OBJECT(var_xlabel);
    Py_DECREF(var_xlabel);
    var_xlabel = NULL;
    CHECK_OBJECT(var_ylabel);
    Py_DECREF(var_ylabel);
    var_ylabel = NULL;
    CHECK_OBJECT(var_unit_x);
    Py_DECREF(var_unit_x);
    var_unit_x = NULL;
    CHECK_OBJECT(var_unit_y);
    Py_DECREF(var_unit_y);
    var_unit_y = NULL;
    CHECK_OBJECT(var_fontsize_title);
    Py_DECREF(var_fontsize_title);
    var_fontsize_title = NULL;
    CHECK_OBJECT(var_fontsize_subtitle);
    Py_DECREF(var_fontsize_subtitle);
    var_fontsize_subtitle = NULL;
    CHECK_OBJECT(var_fontsize_label);
    Py_DECREF(var_fontsize_label);
    var_fontsize_label = NULL;
    Py_XDECREF(var_fontsize_legend);
    var_fontsize_legend = NULL;
    CHECK_OBJECT(var_fontsize_tick);
    Py_DECREF(var_fontsize_tick);
    var_fontsize_tick = NULL;
    CHECK_OBJECT(var_fontsize_annotate);
    Py_DECREF(var_fontsize_annotate);
    var_fontsize_annotate = NULL;
    CHECK_OBJECT(var_fontsize);
    Py_DECREF(var_fontsize);
    var_fontsize = NULL;
    CHECK_OBJECT(var_tick_x_color);
    Py_DECREF(var_tick_x_color);
    var_tick_x_color = NULL;
    CHECK_OBJECT(var_tick_y_color);
    Py_DECREF(var_tick_y_color);
    var_tick_y_color = NULL;
    CHECK_OBJECT(var_label_x_color);
    Py_DECREF(var_label_x_color);
    var_label_x_color = NULL;
    CHECK_OBJECT(var_label_y_color);
    Py_DECREF(var_label_y_color);
    var_label_y_color = NULL;
    CHECK_OBJECT(var_grid_color);
    Py_DECREF(var_grid_color);
    var_grid_color = NULL;
    CHECK_OBJECT(var_annotate_color);
    Py_DECREF(var_annotate_color);
    var_annotate_color = NULL;
    Py_XDECREF(var_legend_label);
    var_legend_label = NULL;
    Py_XDECREF(var_legend_loc);
    var_legend_loc = NULL;
    Py_XDECREF(var_legend_title);
    var_legend_title = NULL;
    Py_XDECREF(var_legend_frameon);
    var_legend_frameon = NULL;
    Py_XDECREF(var_legend_ncol);
    var_legend_ncol = NULL;
    CHECK_OBJECT(var_annotate_text);
    Py_DECREF(var_annotate_text);
    var_annotate_text = NULL;
    CHECK_OBJECT(var_annotate_index);
    Py_DECREF(var_annotate_index);
    var_annotate_index = NULL;
    CHECK_OBJECT(var_annotate_point);
    Py_DECREF(var_annotate_point);
    var_annotate_point = NULL;
    CHECK_OBJECT(var_annotate_loc);
    Py_DECREF(var_annotate_loc);
    var_annotate_loc = NULL;
    CHECK_OBJECT(var_annotate_loc_abs);
    Py_DECREF(var_annotate_loc_abs);
    var_annotate_loc_abs = NULL;
    CHECK_OBJECT(var_fontstyle);
    Py_DECREF(var_fontstyle);
    var_fontstyle = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_STI_point);
    var_STI_point = NULL;
    Py_XDECREF(var_legend_lines);
    var_legend_lines = NULL;
    Py_XDECREF(var_legend_labels);
    var_legend_labels = NULL;
    Py_XDECREF(var_ax_i);
    var_ax_i = NULL;
    Py_XDECREF(var_legend_line);
    var_legend_line = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_figure);
    Py_DECREF(var_figure);
    var_figure = NULL;
    CHECK_OBJECT(var_figsize);
    Py_DECREF(var_figsize);
    var_figsize = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    CHECK_OBJECT(var_xlim);
    Py_DECREF(var_xlim);
    var_xlim = NULL;
    CHECK_OBJECT(var_ylim);
    Py_DECREF(var_ylim);
    var_ylim = NULL;
    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;
    CHECK_OBJECT(var_axtitle);
    Py_DECREF(var_axtitle);
    var_axtitle = NULL;
    Py_XDECREF(var_linecolor);
    var_linecolor = NULL;
    Py_XDECREF(var_linestyle);
    var_linestyle = NULL;
    CHECK_OBJECT(var_linewidth);
    Py_DECREF(var_linewidth);
    var_linewidth = NULL;
    CHECK_OBJECT(var_IsHoldOn);
    Py_DECREF(var_IsHoldOn);
    var_IsHoldOn = NULL;
    CHECK_OBJECT(var_IsGrid);
    Py_DECREF(var_IsGrid);
    var_IsGrid = NULL;
    CHECK_OBJECT(var_IsAnnotate);
    Py_DECREF(var_IsAnnotate);
    var_IsAnnotate = NULL;
    CHECK_OBJECT(var_IsTightLayout);
    Py_DECREF(var_IsTightLayout);
    var_IsTightLayout = NULL;
    CHECK_OBJECT(var_IsMergeLegend);
    Py_DECREF(var_IsMergeLegend);
    var_IsMergeLegend = NULL;
    CHECK_OBJECT(var_IsSTI);
    Py_DECREF(var_IsSTI);
    var_IsSTI = NULL;
    CHECK_OBJECT(var_xlabel);
    Py_DECREF(var_xlabel);
    var_xlabel = NULL;
    CHECK_OBJECT(var_ylabel);
    Py_DECREF(var_ylabel);
    var_ylabel = NULL;
    CHECK_OBJECT(var_unit_x);
    Py_DECREF(var_unit_x);
    var_unit_x = NULL;
    CHECK_OBJECT(var_unit_y);
    Py_DECREF(var_unit_y);
    var_unit_y = NULL;
    CHECK_OBJECT(var_fontsize_title);
    Py_DECREF(var_fontsize_title);
    var_fontsize_title = NULL;
    CHECK_OBJECT(var_fontsize_subtitle);
    Py_DECREF(var_fontsize_subtitle);
    var_fontsize_subtitle = NULL;
    CHECK_OBJECT(var_fontsize_label);
    Py_DECREF(var_fontsize_label);
    var_fontsize_label = NULL;
    Py_XDECREF(var_fontsize_legend);
    var_fontsize_legend = NULL;
    CHECK_OBJECT(var_fontsize_tick);
    Py_DECREF(var_fontsize_tick);
    var_fontsize_tick = NULL;
    CHECK_OBJECT(var_fontsize_annotate);
    Py_DECREF(var_fontsize_annotate);
    var_fontsize_annotate = NULL;
    CHECK_OBJECT(var_fontsize);
    Py_DECREF(var_fontsize);
    var_fontsize = NULL;
    CHECK_OBJECT(var_tick_x_color);
    Py_DECREF(var_tick_x_color);
    var_tick_x_color = NULL;
    CHECK_OBJECT(var_tick_y_color);
    Py_DECREF(var_tick_y_color);
    var_tick_y_color = NULL;
    CHECK_OBJECT(var_label_x_color);
    Py_DECREF(var_label_x_color);
    var_label_x_color = NULL;
    CHECK_OBJECT(var_label_y_color);
    Py_DECREF(var_label_y_color);
    var_label_y_color = NULL;
    CHECK_OBJECT(var_grid_color);
    Py_DECREF(var_grid_color);
    var_grid_color = NULL;
    CHECK_OBJECT(var_annotate_color);
    Py_DECREF(var_annotate_color);
    var_annotate_color = NULL;
    Py_XDECREF(var_legend_label);
    var_legend_label = NULL;
    Py_XDECREF(var_legend_loc);
    var_legend_loc = NULL;
    Py_XDECREF(var_legend_title);
    var_legend_title = NULL;
    Py_XDECREF(var_legend_frameon);
    var_legend_frameon = NULL;
    Py_XDECREF(var_legend_ncol);
    var_legend_ncol = NULL;
    CHECK_OBJECT(var_annotate_text);
    Py_DECREF(var_annotate_text);
    var_annotate_text = NULL;
    CHECK_OBJECT(var_annotate_index);
    Py_DECREF(var_annotate_index);
    var_annotate_index = NULL;
    Py_XDECREF(var_annotate_point);
    var_annotate_point = NULL;
    Py_XDECREF(var_annotate_loc);
    var_annotate_loc = NULL;
    Py_XDECREF(var_annotate_loc_abs);
    var_annotate_loc_abs = NULL;
    Py_XDECREF(var_fontstyle);
    var_fontstyle = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_STI_point);
    var_STI_point = NULL;
    Py_XDECREF(var_legend_lines);
    var_legend_lines = NULL;
    Py_XDECREF(var_legend_labels);
    var_legend_labels = NULL;
    Py_XDECREF(var_ax_i);
    var_ax_i = NULL;
    Py_XDECREF(var_legend_line);
    var_legend_line = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8a6b2005c4442bdf0a2e0144c3921fb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_GUI_Function$Visualise$figure_sync_plot,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_GUI_Function$Visualise$figure_sync_plot[] = {
    impl_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_GUI_Function$Visualise$figure_sync_plot);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_GUI_Function$Visualise$figure_sync_plot,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_GUI_Function$Visualise$figure_sync_plot,
        sizeof(function_table_GUI_Function$Visualise$figure_sync_plot) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "GUI_Function.Visualise.figure_sync_plot";
#endif

// Internal entry point for module code.
PyObject *modulecode_GUI_Function$Visualise$figure_sync_plot(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("GUI_Function$Visualise$figure_sync_plot");

    // Store the module for future use.
    module_GUI_Function$Visualise$figure_sync_plot = module;

    moduledict_GUI_Function$Visualise$figure_sync_plot = MODULE_DICT(module_GUI_Function$Visualise$figure_sync_plot);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("GUI_Function$Visualise$figure_sync_plot: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("GUI_Function$Visualise$figure_sync_plot: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("GUI_Function$Visualise$figure_sync_plot: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "GUI_Function.Visualise.figure_sync_plot" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initGUI_Function$Visualise$figure_sync_plot\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_GUI_Function$Visualise$figure_sync_plot,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_GUI_Function$Visualise$figure_sync_plot,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[48]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_GUI_Function$Visualise$figure_sync_plot,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_GUI_Function$Visualise$figure_sync_plot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_GUI_Function$Visualise$figure_sync_plot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_GUI_Function$Visualise$figure_sync_plot);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_GUI_Function$Visualise$figure_sync_plot);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Visualise$figure_sync_plot;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_2);
    }
    frame_frame_GUI_Function$Visualise$figure_sync_plot = MAKE_MODULE_FRAME(code_objects_5588cf4c9f4a9364bd82be8832e6a321, module_GUI_Function$Visualise$figure_sync_plot);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Visualise$figure_sync_plot);
    assert(Py_REFCNT(frame_frame_GUI_Function$Visualise$figure_sync_plot) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[119], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[120], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[122];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_GUI_Function$Visualise$figure_sync_plot;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[123];
        tmp_level_value_1 = const_int_0;
        frame_frame_GUI_Function$Visualise$figure_sync_plot->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_GUI_Function$Visualise$figure_sync_plot,
                mod_consts[124],
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[125];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_GUI_Function$Visualise$figure_sync_plot;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[126];
        tmp_level_value_2 = const_int_0;
        frame_frame_GUI_Function$Visualise$figure_sync_plot->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_GUI_Function$Visualise$figure_sync_plot,
                mod_consts[57],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[127];
        tmp_dict_value_1 = module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$_ndarray(tstate);
        if (unlikely(tmp_dict_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[124]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[64];
        tmp_dict_value_1 = module_var_accessor_GUI_Function$Visualise$figure_sync_plot_$$_ndarray(tstate);
        if (unlikely(tmp_dict_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[124]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 14;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_6 = MAKE_FUNCTION_GUI_Function$Visualise$figure_sync_plot$$$function__1_figure_sync_plot(tstate, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_6);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Visualise$figure_sync_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Visualise$figure_sync_plot->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Visualise$figure_sync_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_GUI_Function$Visualise$figure_sync_plot);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("GUI_Function$Visualise$figure_sync_plot", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "GUI_Function.Visualise.figure_sync_plot" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_GUI_Function$Visualise$figure_sync_plot);
    return module_GUI_Function$Visualise$figure_sync_plot;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Visualise$figure_sync_plot, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("GUI_Function$Visualise$figure_sync_plot", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
