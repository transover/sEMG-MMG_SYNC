/* Generated code for Python module 'GUI_Function$Analyse$PowerSpectralDensity'
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

/* The "module_GUI_Function$Analyse$PowerSpectralDensity" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_GUI_Function$Analyse$PowerSpectralDensity;
PyDictObject *moduledict_GUI_Function$Analyse$PowerSpectralDensity;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[166];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[166];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("GUI_Function.Analyse.PowerSpectralDensity"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 166; i++) {
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
void checkModuleConstants_GUI_Function$Analyse$PowerSpectralDensity(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 166; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[55]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[55])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[55], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[55])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[55], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[55]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[55]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[55]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Source(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[105]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[105])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[105])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[105]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[105]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[105]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[132]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[132]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[132]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[132]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[165]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[165])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[165], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[165])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[165], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[165]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[165]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[165]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[109]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[109])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[109])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[109]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[109]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[109]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[71]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[71])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[71], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[71])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[71], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[71]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[71]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[71]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[0]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[0])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[0])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[0]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[0]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[0]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt_rcParams_config(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[58]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$PowerSpectralDensity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[58])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[58], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[58])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[58], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[58]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[58]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[58]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4fcb212397db42624ebbc4adf92c0a16;
static PyCodeObject *code_objects_6502898de6fc91eca6acfcfc2a9f815b;
static PyCodeObject *code_objects_9d5f91f69cd377b43cf14b2164f5b14d;
static PyCodeObject *code_objects_3e51ebc644162fa7e7e4a8c47647d5a8;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[160]); CHECK_OBJECT(module_filename_obj);
    code_objects_4fcb212397db42624ebbc4adf92c0a16 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[161], mod_consts[161], NULL, NULL, 0, 0, 0);
    code_objects_6502898de6fc91eca6acfcfc2a9f815b = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[162], NULL, 6, 0, 0);
    code_objects_9d5f91f69cd377b43cf14b2164f5b14d = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[163], NULL, 5, 0, 0);
    code_objects_3e51ebc644162fa7e7e4a8c47647d5a8 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[164], NULL, 5, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_fs = python_pars[1];
    PyObject *par_row = python_pars[2];
    PyObject *par_col = python_pars[3];
    PyObject *par_channel = python_pars[4];
    PyObject *par_isblock = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    PyObject *var_figure = NULL;
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *var_index = NULL;
    PyObject *var_i = NULL;
    PyObject *var_frequencies = NULL;
    PyObject *var_psd = NULL;
    PyObject *var_ax = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot)) {
        Py_XDECREF(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot = MAKE_FUNCTION_FRAME(tstate, code_objects_6502898de6fc91eca6acfcfc2a9f815b, module_GUI_Function$Analyse$PowerSpectralDensity, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_type_description == NULL);
    frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot = cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 44;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[2], 0), mod_consts[3]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_figure == NULL);
        var_figure = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_channel);
        tmp_isinstance_inst_1 = par_channel;
        tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_channel);
        tmp_called_instance_1 = par_channel;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 46;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_row);
        tmp_mult_expr_left_1 = par_row;
        CHECK_OBJECT(par_col);
        tmp_mult_expr_right_1 = par_col;
        tmp_cmp_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[5];
        CHECK_OBJECT(par_channel);
        tmp_len_arg_1 = par_channel;
        tmp_kw_call_arg_value_1_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_row);
        tmp_mult_expr_left_2 = par_row;
        CHECK_OBJECT(par_col);
        tmp_mult_expr_right_2 = par_col;
        tmp_kw_call_arg_value_2_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 47;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 47;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_channel);
        tmp_isinstance_inst_2 = par_channel;
        tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_channel);
        tmp_expression_value_2 = par_channel;
        tmp_subscript_value_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start == NULL);
        var_start = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_channel);
        tmp_expression_value_3 = par_channel;
        tmp_subscript_value_2 = const_int_pos_1;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end == NULL);
        var_end = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_end);
        tmp_sub_expr_left_1 = var_end;
        CHECK_OBJECT(var_start);
        tmp_sub_expr_right_1 = var_start;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = const_int_pos_1;
        tmp_cmp_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_row);
        tmp_mult_expr_left_3 = par_row;
        CHECK_OBJECT(par_col);
        tmp_mult_expr_right_3 = par_col;
        tmp_cmp_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_kw_call_arg_value_0_2 = mod_consts[6];
        CHECK_OBJECT(par_channel);
        tmp_kw_call_arg_value_1_2 = par_channel;
        CHECK_OBJECT(par_row);
        tmp_mult_expr_left_4 = par_row;
        CHECK_OBJECT(par_col);
        tmp_mult_expr_right_4 = par_col;
        tmp_kw_call_arg_value_2_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 52;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_Exception, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_start);
        tmp_xrange_low_1 = var_start;
        CHECK_OBJECT(var_end);
        tmp_add_expr_left_2 = var_end;
        tmp_add_expr_right_2 = const_int_pos_1;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_channel;
            assert(old != NULL);
            par_channel = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_xrange_low_2 = const_int_pos_1;
        CHECK_OBJECT(par_row);
        tmp_mult_expr_left_5 = par_row;
        CHECK_OBJECT(par_col);
        tmp_mult_expr_right_5 = par_col;
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = const_int_pos_1;
        tmp_xrange_high_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_xrange_high_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_2, tmp_xrange_high_2);
        Py_DECREF(tmp_xrange_high_2);
        if (tmp_list_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_LIST(tstate, tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_channel;
            assert(old != NULL);
            par_channel = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_3:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        if (par_channel == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[7]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_channel;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 57;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 57;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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



            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_11;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 12;
        tmp_expression_value_4 = IMPORT_MODULE_FIXED(tstate, mod_consts[8], mod_consts[8]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_5 = par_data;
        CHECK_OBJECT(var_i);
        tmp_sub_expr_left_2 = var_i;
        tmp_sub_expr_right_2 = const_int_pos_1;
        tmp_subscript_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_0_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        if (par_fs == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[10]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_kw_call_dict_value_0_1 = par_fs;
        tmp_kw_call_dict_value_1_1 = mod_consts[11];
        tmp_kw_call_dict_value_2_1 = Py_None;
        tmp_kw_call_dict_value_3_1 = mod_consts[12];
        tmp_kw_call_dict_value_4_1 = Py_True;
        tmp_kw_call_dict_value_5_1 = mod_consts[13];
        tmp_kw_call_dict_value_6_1 = const_int_neg_1;
        tmp_kw_call_dict_value_7_1 = mod_consts[14];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 58;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_frequencies;
            var_frequencies = tmp_assign_source_16;
            Py_INCREF(var_frequencies);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_psd;
            var_psd = tmp_assign_source_17;
            Py_INCREF(var_psd);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (var_figure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[1]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_figure;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[16]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_row == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[17]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_row;
        if (par_col == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[18]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_col;
        CHECK_OBJECT(var_index);
        tmp_add_expr_left_4 = var_index;
        tmp_add_expr_right_4 = const_int_pos_1;
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ax;
            var_ax = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_7 = var_ax;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[19]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[20];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_i);
            tmp_format_value_1 = var_i;
            tmp_format_spec_1 = mod_consts[21];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 70;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_1 = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[22]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 70;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_ax);
        tmp_called_instance_2 = var_ax;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 71;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_ax);
        tmp_called_instance_3 = var_ax;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 72;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[25],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_ax);
        tmp_called_instance_4 = var_ax;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 73;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_ax);
        tmp_called_instance_5 = var_ax;
        CHECK_OBJECT(var_frequencies);
        tmp_args_element_value_5 = var_frequencies;
        CHECK_OBJECT(var_psd);
        tmp_args_element_value_6 = var_psd;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_5,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 57;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_kwargs_value_2;
        if (var_figure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[1]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_figure;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[30]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[31];
        tmp_default_value_1 = mod_consts[32];
        tmp_tuple_element_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_tuple_element_3 == NULL) {
            tmp_tuple_element_3 = tmp_default_value_1;
            Py_INCREF(tmp_tuple_element_3);
        }
        assert(!(tmp_tuple_element_3 == NULL));
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_3);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[33]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 75;
        tmp_call_result_6 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        if (var_figure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[1]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_figure;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[34]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 76;
        tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[36]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_8;
        if (var_figure == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[1]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_figure;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 77;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[37]);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_10 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 78;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[38]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_isblock);
        tmp_kw_call_value_0_1 = par_isblock;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame.f_lineno = 78;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot,
        type_description_1,
        par_data,
        par_fs,
        par_row,
        par_col,
        par_channel,
        par_isblock,
        par_kwargs,
        var_figure,
        var_start,
        var_end,
        var_index,
        var_i,
        var_frequencies,
        var_psd,
        var_ax
    );


    // Release cached frame if used for exception.
    if (frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot == cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot);
        cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot = NULL;
    }

    assertFrameObject(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot);

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
    Py_XDECREF(par_channel);
    par_channel = NULL;
    Py_XDECREF(var_figure);
    var_figure = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_frequencies);
    var_frequencies = NULL;
    Py_XDECREF(var_psd);
    var_psd = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_channel);
    par_channel = NULL;
    Py_XDECREF(var_figure);
    var_figure = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_frequencies);
    var_frequencies = NULL;
    Py_XDECREF(var_psd);
    var_psd = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    CHECK_OBJECT(par_row);
    Py_DECREF(par_row);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_isblock);
    Py_DECREF(par_isblock);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    CHECK_OBJECT(par_row);
    Py_DECREF(par_row);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_isblock);
    Py_DECREF(par_isblock);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data1 = python_pars[0];
    PyObject *par_data2 = python_pars[1];
    PyObject *par_fs = python_pars[2];
    PyObject *par_title = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_tool = NULL;
    PyObject *var_xlim = NULL;
    PyObject *var_frequencies1 = NULL;
    PyObject *var_psd1 = NULL;
    PyObject *var_frequencies2 = NULL;
    PyObject *var_psd2 = NULL;
    PyObject *var_fig = NULL;
    PyObject *var_ax1 = NULL;
    PyObject *var_ax2 = NULL;
    PyObject *var_prefix_str = NULL;
    PyObject *var_ylim1 = NULL;
    PyObject *var_ylim2 = NULL;
    PyObject *var_Param1 = NULL;
    PyObject *var_Param2 = NULL;
    PyObject *var_kwargs1 = NULL;
    PyObject *var_kwargs2 = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot)) {
        Py_XDECREF(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot = MAKE_FUNCTION_FRAME(tstate, code_objects_9d5f91f69cd377b43cf14b2164f5b14d, module_GUI_Function$Analyse$PowerSpectralDensity, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_type_description == NULL);
    frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot = cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_color);
        tmp_operand_value_1 = par_color;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(tstate, mod_consts[41]);
        {
            PyObject *old = par_color;
            assert(old != NULL);
            par_color = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[42];
        tmp_default_value_1 = mod_consts[43];
        tmp_assign_source_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_2 == NULL) {
            tmp_assign_source_2 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_2);
        }
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_tool == NULL);
        var_tool = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_default_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_2 = par_kwargs;
        tmp_key_value_2 = mod_consts[44];
        tmp_default_value_2 = Py_None;
        tmp_assign_source_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_3 == NULL) {
            tmp_assign_source_3 = tmp_default_value_2;
            Py_INCREF(tmp_assign_source_3);
        }
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_xlim == NULL);
        var_xlim = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_tool);
        tmp_cmp_expr_left_1 = var_tool;
        tmp_cmp_expr_right_1 = mod_consts[43];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_default_value_3;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 12;
        tmp_expression_value_1 = IMPORT_MODULE_FIXED(tstate, mod_consts[8], mod_consts[8]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data1);
        tmp_kw_call_arg_value_0_1 = par_data1;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_1 = par_fs;
        tmp_kw_call_dict_value_1_1 = mod_consts[45];
        tmp_kw_call_dict_value_2_1 = mod_consts[46];
        tmp_kw_call_dict_value_3_1 = mod_consts[12];
        tmp_kw_call_dict_value_4_1 = Py_True;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_3 = par_kwargs;
        tmp_key_value_3 = mod_consts[47];
        tmp_default_value_3 = mod_consts[13];
        tmp_kw_call_dict_value_5_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_kw_call_dict_value_5_1 == NULL) {
            tmp_kw_call_dict_value_5_1 = tmp_default_value_3;
            Py_INCREF(tmp_kw_call_dict_value_5_1);
        }
        assert(!(tmp_kw_call_dict_value_5_1 == NULL));
        tmp_kw_call_dict_value_6_1 = const_int_neg_1;
        tmp_kw_call_dict_value_7_1 = mod_consts[14];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 99;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_5_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_frequencies1 == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_frequencies1 = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_psd1 == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_psd1 = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_kw_call_dict_value_5_2;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        PyObject *tmp_default_value_4;
        PyObject *tmp_kw_call_dict_value_6_2;
        PyObject *tmp_kw_call_dict_value_7_2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 12;
        tmp_expression_value_2 = IMPORT_MODULE_FIXED(tstate, mod_consts[8], mod_consts[8]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_data2);
        tmp_kw_call_arg_value_0_2 = par_data2;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_2 = par_fs;
        tmp_kw_call_dict_value_1_2 = mod_consts[45];
        tmp_kw_call_dict_value_2_2 = mod_consts[46];
        tmp_kw_call_dict_value_3_2 = mod_consts[12];
        tmp_kw_call_dict_value_4_2 = Py_True;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_4 = par_kwargs;
        tmp_key_value_4 = mod_consts[47];
        tmp_default_value_4 = mod_consts[13];
        tmp_kw_call_dict_value_5_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_kw_call_dict_value_5_2 == NULL) {
            tmp_kw_call_dict_value_5_2 = tmp_default_value_4;
            Py_INCREF(tmp_kw_call_dict_value_5_2);
        }
        assert(!(tmp_kw_call_dict_value_5_2 == NULL));
        tmp_kw_call_dict_value_6_2 = const_int_neg_1;
        tmp_kw_call_dict_value_7_2 = mod_consts[14];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 110;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_2, tmp_kw_call_dict_value_6_2, tmp_kw_call_dict_value_7_2};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_5_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert(var_frequencies2 == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_frequencies2 = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert(var_psd2 == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_psd2 = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_tool);
        tmp_cmp_expr_left_2 = var_tool;
        tmp_cmp_expr_right_2 = mod_consts[48];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_3_3;
        PyObject *tmp_kw_call_dict_value_4_3;
        PyObject *tmp_kw_call_dict_value_5_3;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 15;
        {
            PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts[49], mod_consts[49]);
            if (likely(hard_module != NULL)) {
                tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[50]);

                Py_DECREF(hard_module);

            } else {
                tmp_called_value_3 = NULL;
            }
        }
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_data1);
        tmp_kw_call_arg_value_0_3 = par_data1;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_3 = par_fs;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_3 = var_xlim;
        tmp_subscript_value_1 = const_int_0;
        tmp_kw_call_dict_value_1_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_4 = var_xlim;
        tmp_subscript_value_2 = const_int_pos_1;
        tmp_kw_call_dict_value_2_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
        if (tmp_kw_call_dict_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_3_3 = mod_consts[46];
        tmp_kw_call_dict_value_4_3 = mod_consts[45];
        tmp_kw_call_dict_value_5_3 = mod_consts[51];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 122;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_3, tmp_kw_call_dict_value_5_3};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_2_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
        assert(var_psd1 == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_psd1 = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
        assert(var_frequencies1 == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_frequencies1 = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_2_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_3_4;
        PyObject *tmp_kw_call_dict_value_4_4;
        PyObject *tmp_kw_call_dict_value_5_4;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 15;
        {
            PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts[49], mod_consts[49]);
            if (likely(hard_module != NULL)) {
                tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[50]);

                Py_DECREF(hard_module);

            } else {
                tmp_called_value_4 = NULL;
            }
        }
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_data2);
        tmp_kw_call_arg_value_0_4 = par_data2;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_4 = par_fs;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_5 = var_xlim;
        tmp_subscript_value_3 = const_int_0;
        tmp_kw_call_dict_value_1_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
        if (tmp_kw_call_dict_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_6 = var_xlim;
        tmp_subscript_value_4 = const_int_pos_1;
        tmp_kw_call_dict_value_2_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
        if (tmp_kw_call_dict_value_2_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_3_4 = mod_consts[46];
        tmp_kw_call_dict_value_4_4 = mod_consts[45];
        tmp_kw_call_dict_value_5_4 = mod_consts[51];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 123;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4, tmp_kw_call_dict_value_3_4, tmp_kw_call_dict_value_4_4, tmp_kw_call_dict_value_5_4};
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_1_4);
        Py_DECREF(tmp_kw_call_dict_value_2_4);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_4__element_1;
        assert(var_psd2 == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_psd2 = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_4__element_2;
        assert(var_frequencies2 == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_frequencies2 = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[53];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_tool);
            tmp_format_value_1 = var_tool;
            tmp_format_spec_1 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 125;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 125;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 125;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_psd1);
        tmp_assattr_value_1 = var_psd1;
        tmp_assattr_target_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_psd2);
        tmp_assattr_value_2 = var_psd2;
        tmp_assattr_target_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[57], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        tmp_called_value_5 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt_rcParams_config(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[58]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 130;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 133;
        tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[61]);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooo";
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

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_5__element_1;
        assert(var_fig == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_fig = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_5__element_2;
        assert(var_ax1 == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_ax1 = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_ax1);
        tmp_called_instance_2 = var_ax1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 134;
        tmp_assign_source_29 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[62]);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ax2 == NULL);
        var_ax2 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[63];
        CHECK_OBJECT(var_ax1);
        tmp_assattr_target_3 = var_ax1;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[64], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[65];
        CHECK_OBJECT(var_ax2);
        tmp_assattr_target_4 = var_ax2;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[64], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_default_value_5;
        PyObject *tmp_dict_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_5 = par_kwargs;
        tmp_key_value_5 = mod_consts[66];
        tmp_default_value_5 = Py_True;
        tmp_dict_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_dict_value_1 == NULL) {
            tmp_dict_value_1 = tmp_default_value_5;
            Py_INCREF(tmp_dict_value_1);
        }
        assert(!(tmp_dict_value_1 == NULL));
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_dict_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_dict_value_1);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_dict_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[67];
        assert(var_prefix_str == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_prefix_str = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_default_value_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_6 = par_kwargs;
        tmp_key_value_6 = mod_consts[68];
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_6 != NULL);
        tmp_expression_value_7 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[70]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[72]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_9 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_3 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_10 = var_xlim;
        tmp_subscript_value_6 = const_int_pos_1;
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 1);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_subscript_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 141;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 141;
        tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = mod_consts[73];
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_8 != NULL);
        tmp_expression_value_11 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[70]);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[72]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_13 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_4 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_14 = var_xlim;
        tmp_subscript_value_8 = const_int_pos_1;
        tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_8, 1);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_subscript_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 142;
        tmp_mult_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 142;
        tmp_sub_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_10 != NULL);
        tmp_expression_value_15 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[70]);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[72]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_17 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_5 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_18 = var_xlim;
        tmp_subscript_value_10 = const_int_pos_1;
        tmp_cmp_expr_right_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_10, 1);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_subscript_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 142;
        tmp_mult_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 142;
        tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_abs_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_mult_expr_left_5;
            PyObject *tmp_mult_expr_right_5;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_abs_arg_2;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_mult_expr_left_7;
            PyObject *tmp_mult_expr_right_7;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_mult_expr_left_8;
            PyObject *tmp_mult_expr_right_8;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_16;
            PyTuple_SET_ITEM(tmp_default_value_6, 0, tmp_tuple_element_2);
            tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_12 != NULL);
            tmp_expression_value_19 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_19 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[70]);
            if (tmp_mult_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_20 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_20 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_mult_expr_left_5);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[72]);
            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_5);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_21 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_6 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_22 = var_xlim;
            tmp_subscript_value_12 = const_int_pos_1;
            tmp_cmp_expr_right_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_12, 1);
            if (tmp_cmp_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_5);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_11 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            Py_DECREF(tmp_cmp_expr_right_6);
            if (tmp_subscript_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_5);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_5);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 143;
            tmp_mult_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_mult_expr_right_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_5);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
            Py_DECREF(tmp_mult_expr_left_5);
            Py_DECREF(tmp_mult_expr_right_5);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 143;
            tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_add_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_6 = mod_consts[73];
            tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_14 != NULL);
            tmp_expression_value_23 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_23 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[70]);
            if (tmp_mult_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_24 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_24 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_7);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[72]);
            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_7);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_25 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_7 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_26 = var_xlim;
            tmp_subscript_value_14 = const_int_pos_1;
            tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_14, 1);
            if (tmp_cmp_expr_right_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_7);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_13 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            Py_DECREF(tmp_cmp_expr_right_7);
            if (tmp_subscript_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_7);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_13);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_7);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 144;
            tmp_mult_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_mult_expr_right_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_7);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
            Py_DECREF(tmp_mult_expr_left_7);
            Py_DECREF(tmp_mult_expr_right_7);
            if (tmp_args_element_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 144;
            tmp_sub_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_sub_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_16 != NULL);
            tmp_expression_value_27 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_27 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[70]);
            if (tmp_mult_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_28 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_28 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_8);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[72]);
            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_8);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_29 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_8 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_30 = var_xlim;
            tmp_subscript_value_16 = const_int_pos_1;
            tmp_cmp_expr_right_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_16, 1);
            if (tmp_cmp_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_8);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_15 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            Py_DECREF(tmp_cmp_expr_right_8);
            if (tmp_subscript_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_8);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_15);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_8);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 145;
            tmp_mult_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_mult_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_8);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
            Py_DECREF(tmp_mult_expr_left_8);
            Py_DECREF(tmp_mult_expr_right_8);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 144;
            tmp_sub_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_abs_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_abs_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 144;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_right_6 = BUILTIN_ABS(tmp_abs_arg_2);
            Py_DECREF(tmp_abs_arg_2);
            if (tmp_mult_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            Py_DECREF(tmp_mult_expr_right_6);
            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 143;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_default_value_6, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_default_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_31 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_assign_source_31 == NULL) {
            tmp_assign_source_31 = tmp_default_value_6;
            Py_INCREF(tmp_assign_source_31);
        }
        Py_DECREF(tmp_default_value_6);
        assert(!(tmp_assign_source_31 == NULL));
        assert(var_ylim1 == NULL);
        var_ylim1 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_key_value_7;
        PyObject *tmp_default_value_7;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_abs_arg_3;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_mult_expr_left_12;
        PyObject *tmp_mult_expr_right_12;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_22;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_7 = par_kwargs;
        tmp_key_value_7 = mod_consts[68];
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_18 != NULL);
        tmp_expression_value_31 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[70]);
        if (tmp_mult_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_9);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[72]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_9);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_33 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_9 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_34 = var_xlim;
        tmp_subscript_value_18 = const_int_pos_1;
        tmp_cmp_expr_right_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_18, 1);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_9);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_subscript_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_9);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_9);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 146;
        tmp_mult_expr_right_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_mult_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_9);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        Py_DECREF(tmp_mult_expr_left_9);
        Py_DECREF(tmp_mult_expr_right_9);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 146;
        tmp_sub_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_10 = mod_consts[73];
        tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_20 != NULL);
        tmp_expression_value_35 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[70]);
        if (tmp_mult_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_11);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[72]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_11);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_37 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_10 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_38 = var_xlim;
        tmp_subscript_value_20 = const_int_pos_1;
        tmp_cmp_expr_right_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_20, 1);
        if (tmp_cmp_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_11);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_subscript_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_11);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_11);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 147;
        tmp_mult_expr_right_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_mult_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_11);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        Py_DECREF(tmp_mult_expr_left_11);
        Py_DECREF(tmp_mult_expr_right_11);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 147;
        tmp_sub_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_22 != NULL);
        tmp_expression_value_39 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[70]);
        if (tmp_mult_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_12);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[72]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_12);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_41 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_11 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_42 = var_xlim;
        tmp_subscript_value_22 = const_int_pos_1;
        tmp_cmp_expr_right_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_22, 1);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_12);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_subscript_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_12);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_12);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 147;
        tmp_mult_expr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_mult_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_12);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
        Py_DECREF(tmp_mult_expr_left_12);
        Py_DECREF(tmp_mult_expr_right_12);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 147;
        tmp_sub_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_abs_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_10 = BUILTIN_ABS(tmp_abs_arg_3);
        Py_DECREF(tmp_abs_arg_3);
        if (tmp_mult_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_right_10);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_mult_expr_left_13;
            PyObject *tmp_mult_expr_right_13;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_mult_expr_left_14;
            PyObject *tmp_mult_expr_right_14;
            PyObject *tmp_abs_arg_4;
            PyObject *tmp_sub_expr_left_6;
            PyObject *tmp_sub_expr_right_6;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_mult_expr_left_15;
            PyObject *tmp_mult_expr_right_15;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_mult_expr_left_16;
            PyObject *tmp_mult_expr_right_16;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_28;
            PyTuple_SET_ITEM(tmp_default_value_7, 0, tmp_tuple_element_3);
            tmp_called_value_24 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_24 != NULL);
            tmp_expression_value_43 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_43 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[70]);
            if (tmp_mult_expr_left_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_44 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_44 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_mult_expr_left_13);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[72]);
            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_13);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_45 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_12 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_46 = var_xlim;
            tmp_subscript_value_24 = const_int_pos_1;
            tmp_cmp_expr_right_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_24, 1);
            if (tmp_cmp_expr_right_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_13);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_23 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            Py_DECREF(tmp_cmp_expr_right_12);
            if (tmp_subscript_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_13);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_23);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_13);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 148;
            tmp_mult_expr_right_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_mult_expr_right_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_13);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_19 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
            Py_DECREF(tmp_mult_expr_left_13);
            Py_DECREF(tmp_mult_expr_right_13);
            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 148;
            tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_14 = mod_consts[73];
            tmp_called_value_26 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_26 != NULL);
            tmp_expression_value_47 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_47 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[70]);
            if (tmp_mult_expr_left_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_48 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_48 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_15);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[72]);
            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_15);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_49 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_13 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_50 = var_xlim;
            tmp_subscript_value_26 = const_int_pos_1;
            tmp_cmp_expr_right_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_26, 1);
            if (tmp_cmp_expr_right_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_15);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_25 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            Py_DECREF(tmp_cmp_expr_right_13);
            if (tmp_subscript_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_15);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_25);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_15);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 149;
            tmp_mult_expr_right_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_mult_expr_right_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_15);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_21 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_15, tmp_mult_expr_right_15);
            Py_DECREF(tmp_mult_expr_left_15);
            Py_DECREF(tmp_mult_expr_right_15);
            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 149;
            tmp_sub_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_sub_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_28 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_28 != NULL);
            tmp_expression_value_51 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_51 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[70]);
            if (tmp_mult_expr_left_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_52 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_52 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_16);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[72]);
            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_16);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_53 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_14 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_54 = var_xlim;
            tmp_subscript_value_28 = const_int_pos_1;
            tmp_cmp_expr_right_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_54, tmp_subscript_value_28, 1);
            if (tmp_cmp_expr_right_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_16);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_27 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            Py_DECREF(tmp_cmp_expr_right_14);
            if (tmp_subscript_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_16);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_27);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_16);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 150;
            tmp_mult_expr_right_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_mult_expr_right_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_16);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_23 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_16, tmp_mult_expr_right_16);
            Py_DECREF(tmp_mult_expr_left_16);
            Py_DECREF(tmp_mult_expr_right_16);
            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 150;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 149;
            tmp_sub_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_sub_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_abs_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
            Py_DECREF(tmp_sub_expr_left_6);
            Py_DECREF(tmp_sub_expr_right_6);
            if (tmp_abs_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 149;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_right_14 = BUILTIN_ABS(tmp_abs_arg_4);
            Py_DECREF(tmp_abs_arg_4);
            if (tmp_mult_expr_right_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
            Py_DECREF(tmp_mult_expr_right_14);
            if (tmp_add_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_default_value_7, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_default_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_32 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
        if (tmp_assign_source_32 == NULL) {
            tmp_assign_source_32 = tmp_default_value_7;
            Py_INCREF(tmp_assign_source_32);
        }
        Py_DECREF(tmp_default_value_7);
        assert(!(tmp_assign_source_32 == NULL));
        assert(var_ylim2 == NULL);
        var_ylim2 = tmp_assign_source_32;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[21];
        assert(var_prefix_str == NULL);
        Py_INCREF(tmp_assign_source_33);
        var_prefix_str = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        PyObject *tmp_default_value_8;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_mult_expr_left_17;
        PyObject *tmp_mult_expr_right_17;
        PyObject *tmp_abs_arg_5;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_34;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_8 = par_kwargs;
        tmp_key_value_8 = mod_consts[68];
        tmp_called_value_30 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_30 != NULL);
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_55 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_15 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_56 = var_xlim;
        tmp_subscript_value_30 = const_int_pos_1;
        tmp_cmp_expr_right_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_30, 1);
        if (tmp_cmp_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_29 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_right_15);
        if (tmp_subscript_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 154;
        tmp_sub_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_sub_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_17 = mod_consts[73];
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_31 != NULL);
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_57 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_16 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_58 = var_xlim;
        tmp_subscript_value_32 = const_int_pos_1;
        tmp_cmp_expr_right_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_32, 1);
        if (tmp_cmp_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_subscript_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_31);
        Py_DECREF(tmp_subscript_value_31);
        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 155;
        tmp_sub_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_32 != NULL);
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_59 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_17 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_60 = var_xlim;
        tmp_subscript_value_34 = const_int_pos_1;
        tmp_cmp_expr_right_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_34, 1);
        if (tmp_cmp_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_33 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_subscript_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_33);
        Py_DECREF(tmp_subscript_value_33);
        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 155;
        tmp_sub_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_sub_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        Py_DECREF(tmp_sub_expr_right_8);
        if (tmp_abs_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_17 = BUILTIN_ABS(tmp_abs_arg_5);
        Py_DECREF(tmp_abs_arg_5);
        if (tmp_mult_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_17, tmp_mult_expr_right_17);
        Py_DECREF(tmp_mult_expr_right_17);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_left_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_mult_expr_left_18;
            PyObject *tmp_mult_expr_right_18;
            PyObject *tmp_abs_arg_6;
            PyObject *tmp_sub_expr_left_9;
            PyObject *tmp_sub_expr_right_9;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_40;
            PyTuple_SET_ITEM(tmp_default_value_8, 0, tmp_tuple_element_4);
            tmp_called_value_33 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_33 != NULL);
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_61 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_18 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_62 = var_xlim;
            tmp_subscript_value_36 = const_int_pos_1;
            tmp_cmp_expr_right_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_62, tmp_subscript_value_36, 1);
            if (tmp_cmp_expr_right_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_subscript_value_35 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            Py_DECREF(tmp_cmp_expr_right_18);
            if (tmp_subscript_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_35);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 156;
            tmp_add_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_add_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_mult_expr_left_18 = mod_consts[73];
            tmp_called_value_34 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_34 != NULL);
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_63 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_19 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_64 = var_xlim;
            tmp_subscript_value_38 = const_int_pos_1;
            tmp_cmp_expr_right_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_64, tmp_subscript_value_38, 1);
            if (tmp_cmp_expr_right_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_subscript_value_37 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            Py_DECREF(tmp_cmp_expr_right_19);
            if (tmp_subscript_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_37);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 157;
            tmp_sub_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_sub_expr_left_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_called_value_35 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_35 != NULL);
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_65 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_20 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_66 = var_xlim;
            tmp_subscript_value_40 = const_int_pos_1;
            tmp_cmp_expr_right_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_40, 1);
            if (tmp_cmp_expr_right_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_subscript_value_39 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            Py_DECREF(tmp_cmp_expr_right_20);
            if (tmp_subscript_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_39);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 157;
            tmp_sub_expr_right_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_sub_expr_right_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_abs_arg_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
            Py_DECREF(tmp_sub_expr_left_9);
            Py_DECREF(tmp_sub_expr_right_9);
            if (tmp_abs_arg_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_mult_expr_right_18 = BUILTIN_ABS(tmp_abs_arg_6);
            Py_DECREF(tmp_abs_arg_6);
            if (tmp_mult_expr_right_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
            Py_DECREF(tmp_mult_expr_right_18);
            if (tmp_add_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_add_expr_right_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_default_value_8, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_default_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_34 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_34 == NULL) {
            tmp_assign_source_34 = tmp_default_value_8;
            Py_INCREF(tmp_assign_source_34);
        }
        Py_DECREF(tmp_default_value_8);
        assert(!(tmp_assign_source_34 == NULL));
        assert(var_ylim1 == NULL);
        var_ylim1 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_key_value_9;
        PyObject *tmp_default_value_9;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_mult_expr_left_19;
        PyObject *tmp_mult_expr_right_19;
        PyObject *tmp_abs_arg_7;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_subscript_value_46;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_9 = par_kwargs;
        tmp_key_value_9 = mod_consts[68];
        tmp_called_value_36 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_36 != NULL);
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_67 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_21 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_68 = var_xlim;
        tmp_subscript_value_42 = const_int_pos_1;
        tmp_cmp_expr_right_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_42, 1);
        if (tmp_cmp_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_41 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        Py_DECREF(tmp_cmp_expr_right_21);
        if (tmp_subscript_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_41);
        Py_DECREF(tmp_subscript_value_41);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 159;
        tmp_sub_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_sub_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_19 = mod_consts[73];
        tmp_called_value_37 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_37 != NULL);
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_69 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_22 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_70 = var_xlim;
        tmp_subscript_value_44 = const_int_pos_1;
        tmp_cmp_expr_right_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_44, 1);
        if (tmp_cmp_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_right_22);
        if (tmp_subscript_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_43);
        Py_DECREF(tmp_subscript_value_43);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 160;
        tmp_sub_expr_left_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_sub_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_38 != NULL);
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_71 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_23 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_72 = var_xlim;
        tmp_subscript_value_46 = const_int_pos_1;
        tmp_cmp_expr_right_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_46, 1);
        if (tmp_cmp_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_45 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        Py_DECREF(tmp_cmp_expr_right_23);
        if (tmp_subscript_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_45);
        Py_DECREF(tmp_subscript_value_45);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 160;
        tmp_sub_expr_right_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_sub_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        Py_DECREF(tmp_sub_expr_left_11);
        Py_DECREF(tmp_sub_expr_right_11);
        if (tmp_abs_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_19 = BUILTIN_ABS(tmp_abs_arg_7);
        Py_DECREF(tmp_abs_arg_7);
        if (tmp_mult_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_10 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
        Py_DECREF(tmp_mult_expr_right_19);
        if (tmp_sub_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        Py_DECREF(tmp_sub_expr_left_10);
        Py_DECREF(tmp_sub_expr_right_10);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_mult_expr_left_20;
            PyObject *tmp_mult_expr_right_20;
            PyObject *tmp_abs_arg_8;
            PyObject *tmp_sub_expr_left_12;
            PyObject *tmp_sub_expr_right_12;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_52;
            PyTuple_SET_ITEM(tmp_default_value_9, 0, tmp_tuple_element_5);
            tmp_called_value_39 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_39 != NULL);
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_73 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_24 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_74 = var_xlim;
            tmp_subscript_value_48 = const_int_pos_1;
            tmp_cmp_expr_right_24 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_74, tmp_subscript_value_48, 1);
            if (tmp_cmp_expr_right_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_subscript_value_47 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            Py_DECREF(tmp_cmp_expr_right_24);
            if (tmp_subscript_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_47);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 161;
            tmp_add_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_add_expr_left_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_mult_expr_left_20 = mod_consts[73];
            tmp_called_value_40 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_40 != NULL);
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_75 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_25 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_76 = var_xlim;
            tmp_subscript_value_50 = const_int_pos_1;
            tmp_cmp_expr_right_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_76, tmp_subscript_value_50, 1);
            if (tmp_cmp_expr_right_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_subscript_value_49 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            Py_DECREF(tmp_cmp_expr_right_25);
            if (tmp_subscript_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_49);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 162;
            tmp_sub_expr_left_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_sub_expr_left_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_called_value_41 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_41 != NULL);
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_77 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_26 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_78 = var_xlim;
            tmp_subscript_value_52 = const_int_pos_1;
            tmp_cmp_expr_right_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_78, tmp_subscript_value_52, 1);
            if (tmp_cmp_expr_right_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_subscript_value_51 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            Py_DECREF(tmp_cmp_expr_right_26);
            if (tmp_subscript_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_51);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 162;
            tmp_sub_expr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_sub_expr_right_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_abs_arg_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
            Py_DECREF(tmp_sub_expr_left_12);
            Py_DECREF(tmp_sub_expr_right_12);
            if (tmp_abs_arg_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_mult_expr_right_20 = BUILTIN_ABS(tmp_abs_arg_8);
            Py_DECREF(tmp_abs_arg_8);
            if (tmp_mult_expr_right_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
            Py_DECREF(tmp_mult_expr_right_20);
            if (tmp_add_expr_right_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_add_expr_right_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_default_value_9, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_default_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_35 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_9, tmp_key_value_9);
        if (tmp_assign_source_35 == NULL) {
            tmp_assign_source_35 = tmp_default_value_9;
            Py_INCREF(tmp_assign_source_35);
        }
        Py_DECREF(tmp_default_value_9);
        assert(!(tmp_assign_source_35 == NULL));
        assert(var_ylim2 == NULL);
        var_ylim2 = tmp_assign_source_35;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(var_fig);
        tmp_dict_value_2 = var_fig;
        tmp_assign_source_36 = _PyDict_NewPresized( 19 );
        {
            PyObject *tmp_dict_arg_value_10;
            PyObject *tmp_key_value_10;
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_kw_call_arg_value_0_5;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_kw_call_arg_value_2_1;
            PyObject *tmp_dict_arg_value_11;
            PyObject *tmp_key_value_11;
            PyObject *tmp_default_value_10;
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_81;
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[75];
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_10 = par_kwargs;
            tmp_key_value_10 = mod_consts[75];
            tmp_dict_value_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_10, tmp_key_value_10);
            if (tmp_dict_value_2 == NULL) {
                tmp_dict_value_2 = Py_None;
                Py_INCREF_IMMORTAL(tmp_dict_value_2);
            }
            assert(!(tmp_dict_value_2 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[76];
            tmp_dict_value_2 = mod_consts[77];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[78];
            CHECK_OBJECT(var_ax1);
            tmp_dict_value_2 = var_ax1;
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[44];
            CHECK_OBJECT(var_xlim);
            tmp_dict_value_2 = var_xlim;
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[68];
            CHECK_OBJECT(var_ylim1);
            tmp_dict_value_2 = var_ylim1;
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            tmp_dict_value_2 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[81];
            tmp_dict_value_2 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            CHECK_OBJECT(par_title);
            tmp_dict_value_2 = par_title;
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[82];
            CHECK_OBJECT(par_color);
            tmp_expression_value_79 = par_color;
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[83]);
            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 175;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_42, mod_consts[84]);

            Py_DECREF(tmp_called_value_42);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_dict_value_2 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            tmp_dict_value_2 = mod_consts[55];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];
            tmp_dict_value_2 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];
            tmp_kw_call_arg_value_0_5 = mod_consts[91];
            CHECK_OBJECT(var_prefix_str);
            tmp_kw_call_arg_value_1_1 = var_prefix_str;
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_11 = par_kwargs;
            tmp_key_value_11 = mod_consts[92];
            tmp_default_value_10 = mod_consts[93];
            tmp_kw_call_arg_value_2_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_11, tmp_key_value_11);
            if (tmp_kw_call_arg_value_2_1 == NULL) {
                tmp_kw_call_arg_value_2_1 = tmp_default_value_10;
                Py_INCREF(tmp_kw_call_arg_value_2_1);
            }
            assert(!(tmp_kw_call_arg_value_2_1 == NULL));
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
            }

            Py_DECREF(tmp_kw_call_arg_value_2_1);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 179;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];
            tmp_dict_value_2 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];
            CHECK_OBJECT(par_color);
            tmp_expression_value_80 = par_color;
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[83]);
            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 181;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 181;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_43, mod_consts[84]);

            Py_DECREF(tmp_called_value_43);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 181;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[97];
            tmp_dict_value_2 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            CHECK_OBJECT(par_color);
            tmp_expression_value_81 = par_color;
            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[83]);
            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 183;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_44, mod_consts[84]);

            Py_DECREF(tmp_called_value_44);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 183;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[99];
            tmp_dict_value_2 = mod_consts[100];
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_36);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_Param1 == NULL);
        var_Param1 = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_2 = mod_consts[1];
        CHECK_OBJECT(var_fig);
        tmp_dict_value_3 = var_fig;
        tmp_assign_source_37 = _PyDict_NewPresized( 19 );
        {
            PyObject *tmp_dict_arg_value_12;
            PyObject *tmp_key_value_12;
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_kw_call_arg_value_0_6;
            PyObject *tmp_kw_call_arg_value_1_2;
            PyObject *tmp_kw_call_arg_value_2_2;
            PyObject *tmp_dict_arg_value_13;
            PyObject *tmp_key_value_13;
            PyObject *tmp_default_value_11;
            PyObject *tmp_called_value_46;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_called_value_47;
            PyObject *tmp_expression_value_84;
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[75];
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_12 = par_kwargs;
            tmp_key_value_12 = mod_consts[75];
            tmp_dict_value_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_12, tmp_key_value_12);
            if (tmp_dict_value_3 == NULL) {
                tmp_dict_value_3 = Py_None;
                Py_INCREF_IMMORTAL(tmp_dict_value_3);
            }
            assert(!(tmp_dict_value_3 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[76];
            tmp_dict_value_3 = mod_consts[77];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[78];
            CHECK_OBJECT(var_ax2);
            tmp_dict_value_3 = var_ax2;
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[44];
            CHECK_OBJECT(var_xlim);
            tmp_dict_value_3 = var_xlim;
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[68];
            CHECK_OBJECT(var_ylim2);
            tmp_dict_value_3 = var_ylim2;
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[79];
            tmp_dict_value_3 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[81];
            tmp_dict_value_3 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[31];
            CHECK_OBJECT(par_title);
            tmp_dict_value_3 = par_title;
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[82];
            CHECK_OBJECT(par_color);
            tmp_expression_value_82 = par_color;
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[83]);
            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 196;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_45, mod_consts[101]);

            Py_DECREF(tmp_called_value_45);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[85];
            tmp_dict_value_3 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[87];
            tmp_dict_value_3 = mod_consts[55];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[88];
            tmp_dict_value_3 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[90];
            tmp_kw_call_arg_value_0_6 = mod_consts[91];
            CHECK_OBJECT(var_prefix_str);
            tmp_kw_call_arg_value_1_2 = var_prefix_str;
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_13 = par_kwargs;
            tmp_key_value_13 = mod_consts[102];
            tmp_default_value_11 = mod_consts[103];
            tmp_kw_call_arg_value_2_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_13, tmp_key_value_13);
            if (tmp_kw_call_arg_value_2_2 == NULL) {
                tmp_kw_call_arg_value_2_2 = tmp_default_value_11;
                Py_INCREF(tmp_kw_call_arg_value_2_2);
            }
            assert(!(tmp_kw_call_arg_value_2_2 == NULL));
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
                tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
            }

            Py_DECREF(tmp_kw_call_arg_value_2_2);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 200;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[94];
            tmp_dict_value_3 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[96];
            CHECK_OBJECT(par_color);
            tmp_expression_value_83 = par_color;
            tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[83]);
            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 202;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 202;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_46, mod_consts[101]);

            Py_DECREF(tmp_called_value_46);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 202;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[97];
            tmp_dict_value_3 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[98];
            CHECK_OBJECT(par_color);
            tmp_expression_value_84 = par_color;
            tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[83]);
            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 204;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_47, mod_consts[101]);

            Py_DECREF(tmp_called_value_47);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 204;
                type_description_1 = "oooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[99];
            tmp_dict_value_3 = mod_consts[104];
            tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_2, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_37);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(var_Param2 == NULL);
        var_Param2 = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_expression_value_86;
        tmp_expression_value_86 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Source(tstate);
        if (unlikely(tmp_expression_value_86 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[106]);
        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[107]);
        Py_DECREF(tmp_expression_value_85);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 208;
        tmp_assign_source_38 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_48);
        Py_DECREF(tmp_called_value_48);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_kwargs1 == NULL);
        var_kwargs1 = tmp_assign_source_38;
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_37;
        CHECK_OBJECT(var_kwargs1);
        tmp_expression_value_87 = var_kwargs1;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[108]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Param1);
        tmp_args_element_value_37 = var_Param1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 209;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_49);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        tmp_expression_value_89 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Source(tstate);
        if (unlikely(tmp_expression_value_89 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[106]);
        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[107]);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 210;
        tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_50);
        Py_DECREF(tmp_called_value_50);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_kwargs2 == NULL);
        var_kwargs2 = tmp_assign_source_39;
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_38;
        CHECK_OBJECT(var_kwargs2);
        tmp_expression_value_90 = var_kwargs2;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[108]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Param2);
        tmp_args_element_value_38 = var_Param2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 211;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_51);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        bool tmp_condition_result_5;
        CHECK_OBJECT(var_prefix_str);
        tmp_condition_result_5 = CHECK_IF_TRUE(var_prefix_str) == 1;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_call_result_4;
        tmp_direct_call_arg1_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies1);
        tmp_tuple_element_6 = var_frequencies1;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_mult_expr_left_21;
            PyObject *tmp_mult_expr_right_21;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_39;
            PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_6);
            tmp_expression_value_91 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_91 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 214;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_mult_expr_left_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[70]);
            if (tmp_mult_expr_left_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 214;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_called_instance_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_called_instance_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_mult_expr_left_21);

                exception_lineno = 214;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_psd1);
            tmp_args_element_value_39 = var_psd1;
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 214;
            tmp_mult_expr_right_21 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[72], tmp_args_element_value_39);
            if (tmp_mult_expr_right_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_21);

                exception_lineno = 214;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
            Py_DECREF(tmp_mult_expr_left_21);
            Py_DECREF(tmp_mult_expr_right_21);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 214;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_direct_call_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        CHECK_OBJECT(var_kwargs1);
        tmp_direct_call_arg3_1 = var_kwargs1;
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
            tmp_call_result_4 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_direct_call_arg1_2;
        PyObject *tmp_direct_call_arg2_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_direct_call_arg3_2;
        PyObject *tmp_call_result_5;
        tmp_direct_call_arg1_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies2);
        tmp_tuple_element_7 = var_frequencies2;
        tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_mult_expr_left_22;
            PyObject *tmp_mult_expr_right_22;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_40;
            PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_7);
            tmp_expression_value_92 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_92 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_mult_expr_left_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[70]);
            if (tmp_mult_expr_left_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_called_instance_4 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_called_instance_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_mult_expr_left_22);

                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(var_psd2);
            tmp_args_element_value_40 = var_psd2;
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 215;
            tmp_mult_expr_right_22 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[72], tmp_args_element_value_40);
            if (tmp_mult_expr_right_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_22);

                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
            Py_DECREF(tmp_mult_expr_left_22);
            Py_DECREF(tmp_mult_expr_right_22);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_direct_call_arg2_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_direct_call_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        CHECK_OBJECT(var_kwargs2);
        tmp_direct_call_arg3_2 = var_kwargs2;
        Py_INCREF(tmp_direct_call_arg1_2);
        Py_INCREF(tmp_direct_call_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
            tmp_call_result_5 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_direct_call_arg1_3;
        PyObject *tmp_direct_call_arg2_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_direct_call_arg3_3;
        PyObject *tmp_call_result_6;
        tmp_direct_call_arg1_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies1);
        tmp_tuple_element_8 = var_frequencies1;
        tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_psd1);
        tmp_tuple_element_8 = var_psd1;
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(var_kwargs1);
        tmp_direct_call_arg3_3 = var_kwargs1;
        Py_INCREF(tmp_direct_call_arg1_3);
        Py_INCREF(tmp_direct_call_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3};
            tmp_call_result_6 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_direct_call_arg1_4;
        PyObject *tmp_direct_call_arg2_4;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_direct_call_arg3_4;
        PyObject *tmp_call_result_7;
        tmp_direct_call_arg1_4 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies2);
        tmp_tuple_element_9 = var_frequencies2;
        tmp_direct_call_arg2_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 0, tmp_tuple_element_9);
        CHECK_OBJECT(var_psd2);
        tmp_tuple_element_9 = var_psd2;
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 1, tmp_tuple_element_9);
        CHECK_OBJECT(var_kwargs2);
        tmp_direct_call_arg3_4 = var_kwargs2;
        Py_INCREF(tmp_direct_call_arg1_4);
        Py_INCREF(tmp_direct_call_arg3_4);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4, tmp_direct_call_arg3_4};
            tmp_call_result_7 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_end_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        PyObject *tmp_default_value_12;
        PyObject *tmp_dict_value_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_14 = par_kwargs;
        tmp_key_value_14 = mod_consts[110];
        tmp_default_value_12 = Py_False;
        tmp_dict_value_4 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_dict_value_4 == NULL) {
            tmp_dict_value_4 = tmp_default_value_12;
            Py_INCREF(tmp_dict_value_4);
        }
        assert(!(tmp_dict_value_4 == NULL));
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_dict_value_4);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_dict_value_4);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_dict_value_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_8;
        tmp_expression_value_93 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(tstate);
        if (unlikely(tmp_expression_value_93 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[38]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame.f_lineno = 221;
        tmp_call_result_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[28], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_52);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot,
        type_description_1,
        par_data1,
        par_data2,
        par_fs,
        par_title,
        par_color,
        par_kwargs,
        var_tool,
        var_xlim,
        var_frequencies1,
        var_psd1,
        var_frequencies2,
        var_psd2,
        var_fig,
        var_ax1,
        var_ax2,
        var_prefix_str,
        var_ylim1,
        var_ylim2,
        var_Param1,
        var_Param2,
        var_kwargs1,
        var_kwargs2
    );


    // Release cached frame if used for exception.
    if (frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot == cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot);
        cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot = NULL;
    }

    assertFrameObject(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_fig);
    tmp_return_value = var_fig;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    par_color = NULL;
    CHECK_OBJECT(var_tool);
    Py_DECREF(var_tool);
    var_tool = NULL;
    CHECK_OBJECT(var_xlim);
    Py_DECREF(var_xlim);
    var_xlim = NULL;
    Py_XDECREF(var_frequencies1);
    var_frequencies1 = NULL;
    CHECK_OBJECT(var_psd1);
    Py_DECREF(var_psd1);
    var_psd1 = NULL;
    Py_XDECREF(var_frequencies2);
    var_frequencies2 = NULL;
    CHECK_OBJECT(var_psd2);
    Py_DECREF(var_psd2);
    var_psd2 = NULL;
    CHECK_OBJECT(var_fig);
    Py_DECREF(var_fig);
    var_fig = NULL;
    CHECK_OBJECT(var_ax1);
    Py_DECREF(var_ax1);
    var_ax1 = NULL;
    CHECK_OBJECT(var_ax2);
    Py_DECREF(var_ax2);
    var_ax2 = NULL;
    CHECK_OBJECT(var_prefix_str);
    Py_DECREF(var_prefix_str);
    var_prefix_str = NULL;
    CHECK_OBJECT(var_ylim1);
    Py_DECREF(var_ylim1);
    var_ylim1 = NULL;
    CHECK_OBJECT(var_ylim2);
    Py_DECREF(var_ylim2);
    var_ylim2 = NULL;
    CHECK_OBJECT(var_Param1);
    Py_DECREF(var_Param1);
    var_Param1 = NULL;
    CHECK_OBJECT(var_Param2);
    Py_DECREF(var_Param2);
    var_Param2 = NULL;
    CHECK_OBJECT(var_kwargs1);
    Py_DECREF(var_kwargs1);
    var_kwargs1 = NULL;
    CHECK_OBJECT(var_kwargs2);
    Py_DECREF(var_kwargs2);
    var_kwargs2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_color);
    par_color = NULL;
    Py_XDECREF(var_tool);
    var_tool = NULL;
    Py_XDECREF(var_xlim);
    var_xlim = NULL;
    Py_XDECREF(var_frequencies1);
    var_frequencies1 = NULL;
    Py_XDECREF(var_psd1);
    var_psd1 = NULL;
    Py_XDECREF(var_frequencies2);
    var_frequencies2 = NULL;
    Py_XDECREF(var_psd2);
    var_psd2 = NULL;
    Py_XDECREF(var_fig);
    var_fig = NULL;
    Py_XDECREF(var_ax1);
    var_ax1 = NULL;
    Py_XDECREF(var_ax2);
    var_ax2 = NULL;
    Py_XDECREF(var_prefix_str);
    var_prefix_str = NULL;
    Py_XDECREF(var_ylim1);
    var_ylim1 = NULL;
    Py_XDECREF(var_ylim2);
    var_ylim2 = NULL;
    Py_XDECREF(var_Param1);
    var_Param1 = NULL;
    Py_XDECREF(var_Param2);
    var_Param2 = NULL;
    Py_XDECREF(var_kwargs1);
    var_kwargs1 = NULL;
    Py_XDECREF(var_kwargs2);
    var_kwargs2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data1);
    Py_DECREF(par_data1);
    CHECK_OBJECT(par_data2);
    Py_DECREF(par_data2);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data1);
    Py_DECREF(par_data1);
    CHECK_OBJECT(par_data2);
    Py_DECREF(par_data2);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_data1 = python_pars[0];
    PyObject *par_data2 = python_pars[1];
    PyObject *par_fs = python_pars[2];
    PyObject *par_title = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_tool = NULL;
    PyObject *var_xlim = NULL;
    PyObject *var_frequencies1 = NULL;
    PyObject *var_psd1 = NULL;
    PyObject *var_frequencies2 = NULL;
    PyObject *var_psd2 = NULL;
    PyObject *var_psd1_std = NULL;
    PyObject *var_psd2_std = NULL;
    PyObject *var_fig = NULL;
    PyObject *var_ax1 = NULL;
    PyObject *var_ax2 = NULL;
    PyObject *var_prefix_str = NULL;
    PyObject *var_ylim1 = NULL;
    PyObject *var_ylim2 = NULL;
    PyObject *var_Param1 = NULL;
    PyObject *var_Param2 = NULL;
    PyObject *var_kwargs1 = NULL;
    PyObject *var_kwargs2 = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band)) {
        Py_XDECREF(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band = MAKE_FUNCTION_FRAME(tstate, code_objects_3e51ebc644162fa7e7e4a8c47647d5a8, module_GUI_Function$Analyse$PowerSpectralDensity, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_type_description == NULL);
    frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band = cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_color);
        tmp_operand_value_1 = par_color;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(tstate, mod_consts[41]);
        {
            PyObject *old = par_color;
            assert(old != NULL);
            par_color = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[42];
        tmp_default_value_1 = mod_consts[43];
        tmp_assign_source_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_2 == NULL) {
            tmp_assign_source_2 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_2);
        }
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_tool == NULL);
        var_tool = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_default_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_2 = par_kwargs;
        tmp_key_value_2 = mod_consts[44];
        tmp_default_value_2 = Py_None;
        tmp_assign_source_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_3 == NULL) {
            tmp_assign_source_3 = tmp_default_value_2;
            Py_INCREF(tmp_assign_source_3);
        }
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_xlim == NULL);
        var_xlim = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_tool);
        tmp_cmp_expr_left_1 = var_tool;
        tmp_cmp_expr_right_1 = mod_consts[43];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_default_value_3;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 12;
        tmp_expression_value_1 = IMPORT_MODULE_FIXED(tstate, mod_consts[8], mod_consts[8]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data1);
        tmp_kw_call_arg_value_0_1 = par_data1;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_1 = par_fs;
        tmp_expression_value_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[112]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[113]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_3_1 = mod_consts[12];
        tmp_kw_call_dict_value_4_1 = Py_True;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_3 = par_kwargs;
        tmp_key_value_3 = mod_consts[47];
        tmp_default_value_3 = mod_consts[13];
        tmp_kw_call_dict_value_5_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_kw_call_dict_value_5_1 == NULL) {
            tmp_kw_call_dict_value_5_1 = tmp_default_value_3;
            Py_INCREF(tmp_kw_call_dict_value_5_1);
        }
        assert(!(tmp_kw_call_dict_value_5_1 == NULL));
        tmp_kw_call_dict_value_6_1 = const_int_neg_1;
        tmp_kw_call_dict_value_7_1 = mod_consts[14];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 242;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_5_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_frequencies1 == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_frequencies1 = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_psd1 == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_psd1 = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_kw_call_dict_value_5_2;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        PyObject *tmp_default_value_4;
        PyObject *tmp_kw_call_dict_value_6_2;
        PyObject *tmp_kw_call_dict_value_7_2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 12;
        tmp_expression_value_4 = IMPORT_MODULE_FIXED(tstate, mod_consts[8], mod_consts[8]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_data2);
        tmp_kw_call_arg_value_0_2 = par_data2;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_2 = par_fs;
        tmp_expression_value_5 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[112]);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_6 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[113]);
        if (tmp_kw_call_dict_value_2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_3_2 = mod_consts[12];
        tmp_kw_call_dict_value_4_2 = Py_True;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_4 = par_kwargs;
        tmp_key_value_4 = mod_consts[47];
        tmp_default_value_4 = mod_consts[13];
        tmp_kw_call_dict_value_5_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_kw_call_dict_value_5_2 == NULL) {
            tmp_kw_call_dict_value_5_2 = tmp_default_value_4;
            Py_INCREF(tmp_kw_call_dict_value_5_2);
        }
        assert(!(tmp_kw_call_dict_value_5_2 == NULL));
        tmp_kw_call_dict_value_6_2 = const_int_neg_1;
        tmp_kw_call_dict_value_7_2 = mod_consts[14];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 253;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_2, tmp_kw_call_dict_value_6_2, tmp_kw_call_dict_value_7_2};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_2_2);
        Py_DECREF(tmp_kw_call_dict_value_5_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert(var_frequencies2 == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_frequencies2 = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert(var_psd2 == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_psd2 = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_tool);
        tmp_cmp_expr_left_2 = var_tool;
        tmp_cmp_expr_right_2 = mod_consts[48];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_dict_value_3_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_4_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_dict_value_5_3;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 15;
        {
            PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts[49], mod_consts[49]);
            if (likely(hard_module != NULL)) {
                tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[50]);

                Py_DECREF(hard_module);

            } else {
                tmp_called_value_3 = NULL;
            }
        }
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_data1);
        tmp_kw_call_arg_value_0_3 = par_data1;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_3 = par_fs;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_7 = var_xlim;
        tmp_subscript_value_1 = const_int_0;
        tmp_kw_call_dict_value_1_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_8 = var_xlim;
        tmp_subscript_value_2 = const_int_pos_1;
        tmp_kw_call_dict_value_2_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 1);
        if (tmp_kw_call_dict_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_9 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);
            Py_DECREF(tmp_kw_call_dict_value_2_3);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_3_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[113]);
        if (tmp_kw_call_dict_value_3_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);
            Py_DECREF(tmp_kw_call_dict_value_2_3);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_10 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);
            Py_DECREF(tmp_kw_call_dict_value_2_3);
            Py_DECREF(tmp_kw_call_dict_value_3_3);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_4_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[112]);
        if (tmp_kw_call_dict_value_4_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_1_3);
            Py_DECREF(tmp_kw_call_dict_value_2_3);
            Py_DECREF(tmp_kw_call_dict_value_3_3);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_5_3 = mod_consts[51];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 265;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_3, tmp_kw_call_dict_value_5_3};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_2_3);
        Py_DECREF(tmp_kw_call_dict_value_3_3);
        Py_DECREF(tmp_kw_call_dict_value_4_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
        assert(var_psd1 == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_psd1 = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
        assert(var_frequencies1 == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_frequencies1 = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_2_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_3_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_dict_value_4_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_dict_value_5_4;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 15;
        {
            PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts[49], mod_consts[49]);
            if (likely(hard_module != NULL)) {
                tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[50]);

                Py_DECREF(hard_module);

            } else {
                tmp_called_value_4 = NULL;
            }
        }
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(par_data2);
        tmp_kw_call_arg_value_0_4 = par_data2;
        CHECK_OBJECT(par_fs);
        tmp_kw_call_dict_value_0_4 = par_fs;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_11 = var_xlim;
        tmp_subscript_value_3 = const_int_0;
        tmp_kw_call_dict_value_1_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_kw_call_dict_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_12 = var_xlim;
        tmp_subscript_value_4 = const_int_pos_1;
        tmp_kw_call_dict_value_2_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 1);
        if (tmp_kw_call_dict_value_2_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_13 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);
            Py_DECREF(tmp_kw_call_dict_value_2_4);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_3_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[113]);
        if (tmp_kw_call_dict_value_3_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);
            Py_DECREF(tmp_kw_call_dict_value_2_4);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_14 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);
            Py_DECREF(tmp_kw_call_dict_value_2_4);
            Py_DECREF(tmp_kw_call_dict_value_3_4);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_4_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[112]);
        if (tmp_kw_call_dict_value_4_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_dict_value_1_4);
            Py_DECREF(tmp_kw_call_dict_value_2_4);
            Py_DECREF(tmp_kw_call_dict_value_3_4);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_5_4 = mod_consts[51];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 266;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4, tmp_kw_call_dict_value_3_4, tmp_kw_call_dict_value_4_4, tmp_kw_call_dict_value_5_4};
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_1_4);
        Py_DECREF(tmp_kw_call_dict_value_2_4);
        Py_DECREF(tmp_kw_call_dict_value_3_4);
        Py_DECREF(tmp_kw_call_dict_value_4_4);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_4__element_1;
        assert(var_psd2 == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_psd2 = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_4__element_2;
        assert(var_frequencies2 == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_frequencies2 = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[53];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_tool);
            tmp_format_value_1 = var_tool;
            tmp_format_spec_1 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 269;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 269;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 269;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_15 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[14]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_tuple_element_2 = var_psd1;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[114]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 271;
        tmp_assattr_value_1 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[115], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_16 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[14]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_tuple_element_3 = var_psd2;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[114]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 272;
        tmp_assattr_value_2 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[116], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_default_value_5;
        PyObject *tmp_dict_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_5 = par_kwargs;
        tmp_key_value_5 = mod_consts[66];
        tmp_default_value_5 = Py_True;
        tmp_dict_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_dict_value_1 == NULL) {
            tmp_dict_value_1 = tmp_default_value_5;
            Py_INCREF(tmp_dict_value_1);
        }
        assert(!(tmp_dict_value_1 == NULL));
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_dict_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_dict_value_1);

            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_dict_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kwargs_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_17 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[117]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_7);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[70]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_args_element_value_1 = var_psd1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 279;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[72], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_4);
        tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts[114]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 279;
        tmp_assattr_value_3 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[118], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kwargs_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_19 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[117]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[70]);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_args_element_value_2 = var_psd2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 280;
        tmp_mult_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[72], tmp_args_element_value_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_5);
        tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts[114]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 280;
        tmp_assattr_value_4 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[119], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 280;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_21 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[117]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_tuple_element_6 = var_psd1;
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_6);
        tmp_kwargs_value_5 = DICT_COPY(tstate, mod_consts[114]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 282;
        tmp_assattr_value_5 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[118], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 282;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_22 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[117]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_tuple_element_7 = var_psd2;
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_7);
        tmp_kwargs_value_6 = DICT_COPY(tstate, mod_consts[114]);
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 283;
        tmp_assattr_value_6 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_assattr_target_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[119], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[115]);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 285;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_psd1;
            assert(old != NULL);
            var_psd1 = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[116]);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_psd2;
            assert(old != NULL);
            var_psd2 = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[118]);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 287;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_psd1_std == NULL);
        var_psd1_std = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[119]);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_psd2_std == NULL);
        var_psd2_std = tmp_assign_source_27;
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_1;
        tmp_called_value_11 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt_rcParams_config(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[58]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 293;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 296;
        tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[61]);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 296;
            type_description_1 = "oooooooooooooooooooooooo";
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

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_31 = tmp_tuple_unpack_5__element_1;
        assert(var_fig == NULL);
        Py_INCREF(tmp_assign_source_31);
        var_fig = tmp_assign_source_31;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_32 = tmp_tuple_unpack_5__element_2;
        assert(var_ax1 == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_ax1 = tmp_assign_source_32;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_ax1);
        tmp_called_instance_4 = var_ax1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 297;
        tmp_assign_source_33 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[62]);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ax2 == NULL);
        var_ax2 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[63];
        CHECK_OBJECT(var_ax1);
        tmp_assattr_target_7 = var_ax1;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[64], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = mod_consts[65];
        CHECK_OBJECT(var_ax2);
        tmp_assattr_target_8 = var_ax2;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[64], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 300;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_default_value_6;
        PyObject *tmp_dict_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_6 = par_kwargs;
        tmp_key_value_6 = mod_consts[66];
        tmp_default_value_6 = Py_True;
        tmp_dict_value_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_dict_value_2 == NULL) {
            tmp_dict_value_2 = tmp_default_value_6;
            Py_INCREF(tmp_dict_value_2);
        }
        assert(!(tmp_dict_value_2 == NULL));
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_dict_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_dict_value_2);

            exception_lineno = 302;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_dict_value_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[67];
        assert(var_prefix_str == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_prefix_str = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_key_value_7;
        PyObject *tmp_default_value_7;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_abs_arg_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_7 = par_kwargs;
        tmp_key_value_7 = mod_consts[68];
        tmp_expression_value_27 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[74]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_12);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[118]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 304;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[120];
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_13 != NULL);
        tmp_expression_value_29 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[70]);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[72]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_31 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_3 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_32 = var_xlim;
        tmp_subscript_value_6 = const_int_pos_1;
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_6, 1);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_subscript_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 304;
        tmp_mult_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 304;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_5 = mod_consts[73];
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_15 != NULL);
        tmp_expression_value_33 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[70]);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_6);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[72]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_6);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_35 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_4 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_36 = var_xlim;
        tmp_subscript_value_8 = const_int_pos_1;
        tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_8, 1);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_6);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_subscript_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_6);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_6);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 305;
        tmp_mult_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_6);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 305;
        tmp_sub_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_17 != NULL);
        tmp_expression_value_37 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[70]);
        if (tmp_mult_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_7);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[72]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_7);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_39 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_5 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_40 = var_xlim;
        tmp_subscript_value_10 = const_int_pos_1;
        tmp_cmp_expr_right_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_10, 1);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_7);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_subscript_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_7);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_7);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 305;
        tmp_mult_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_mult_expr_left_7);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 305;
        tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_abs_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 305;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_5 = BUILTIN_ABS(tmp_abs_arg_1);
        Py_DECREF(tmp_abs_arg_1);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_mult_expr_left_8;
            PyObject *tmp_mult_expr_right_8;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_mult_expr_left_9;
            PyObject *tmp_mult_expr_right_9;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_mult_expr_left_10;
            PyObject *tmp_mult_expr_right_10;
            PyObject *tmp_abs_arg_2;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_mult_expr_left_11;
            PyObject *tmp_mult_expr_right_11;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_mult_expr_left_12;
            PyObject *tmp_mult_expr_right_12;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_16;
            PyTuple_SET_ITEM(tmp_default_value_7, 0, tmp_tuple_element_8);
            tmp_expression_value_41 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_41 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[74]);
            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_42 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_42 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_19);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[118]);
            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 306;
            tmp_mult_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_mult_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_right_8 = mod_consts[120];
            tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
            Py_DECREF(tmp_mult_expr_left_8);
            if (tmp_add_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_20 != NULL);
            tmp_expression_value_43 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_43 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[70]);
            if (tmp_mult_expr_left_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_44 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_44 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_9);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[72]);
            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_9);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_45 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_6 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_46 = var_xlim;
            tmp_subscript_value_12 = const_int_pos_1;
            tmp_cmp_expr_right_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_12, 1);
            if (tmp_cmp_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_9);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_11 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            Py_DECREF(tmp_cmp_expr_right_6);
            if (tmp_subscript_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_9);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_11);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_9);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 306;
            tmp_mult_expr_right_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_mult_expr_right_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_9);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
            Py_DECREF(tmp_mult_expr_left_9);
            Py_DECREF(tmp_mult_expr_right_9);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 306;
            tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_add_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_add_expr_right_3);
            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_10 = mod_consts[73];
            tmp_called_value_22 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_22 != NULL);
            tmp_expression_value_47 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_47 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[70]);
            if (tmp_mult_expr_left_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_48 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_48 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_11);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[72]);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_11);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_49 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_7 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_50 = var_xlim;
            tmp_subscript_value_14 = const_int_pos_1;
            tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_14, 1);
            if (tmp_cmp_expr_right_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_11);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_13 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            Py_DECREF(tmp_cmp_expr_right_7);
            if (tmp_subscript_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_11);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_13);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_11);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 307;
            tmp_mult_expr_right_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_mult_expr_right_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_mult_expr_left_11);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
            Py_DECREF(tmp_mult_expr_left_11);
            Py_DECREF(tmp_mult_expr_right_11);
            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 307;
            tmp_sub_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_sub_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_24 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_24 != NULL);
            tmp_expression_value_51 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_51 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[70]);
            if (tmp_mult_expr_left_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_52 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_52 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_12);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[72]);
            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_12);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_53 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_8 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_54 = var_xlim;
            tmp_subscript_value_16 = const_int_pos_1;
            tmp_cmp_expr_right_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_54, tmp_subscript_value_16, 1);
            if (tmp_cmp_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_12);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_subscript_value_15 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            Py_DECREF(tmp_cmp_expr_right_8);
            if (tmp_subscript_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_12);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_15);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_12);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 308;
            tmp_mult_expr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_mult_expr_right_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_12);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
            Py_DECREF(tmp_mult_expr_left_12);
            Py_DECREF(tmp_mult_expr_right_12);
            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 308;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 307;
            tmp_sub_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_abs_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_abs_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 307;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_mult_expr_right_10 = BUILTIN_ABS(tmp_abs_arg_2);
            Py_DECREF(tmp_abs_arg_2);
            if (tmp_mult_expr_right_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
            Py_DECREF(tmp_mult_expr_right_10);
            if (tmp_add_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 306;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_default_value_7, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_default_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_35 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
        if (tmp_assign_source_35 == NULL) {
            tmp_assign_source_35 = tmp_default_value_7;
            Py_INCREF(tmp_assign_source_35);
        }
        Py_DECREF(tmp_default_value_7);
        assert(!(tmp_assign_source_35 == NULL));
        assert(var_ylim1 == NULL);
        var_ylim1 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        PyObject *tmp_default_value_8;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_13;
        PyObject *tmp_mult_expr_right_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_mult_expr_left_14;
        PyObject *tmp_mult_expr_right_14;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_mult_expr_left_15;
        PyObject *tmp_mult_expr_right_15;
        PyObject *tmp_abs_arg_3;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_mult_expr_left_16;
        PyObject *tmp_mult_expr_right_16;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_mult_expr_left_17;
        PyObject *tmp_mult_expr_right_17;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_22;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_8 = par_kwargs;
        tmp_key_value_8 = mod_consts[68];
        tmp_expression_value_55 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[74]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_56 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_26);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[119]);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 309;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_13 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_mult_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_13 = mod_consts[120];
        tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
        Py_DECREF(tmp_mult_expr_left_13);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_27 != NULL);
        tmp_expression_value_57 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[70]);
        if (tmp_mult_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[72]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_59 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_9 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_60 = var_xlim;
        tmp_subscript_value_18 = const_int_pos_1;
        tmp_cmp_expr_right_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_18, 1);
        if (tmp_cmp_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_subscript_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 309;
        tmp_mult_expr_right_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_mult_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
        Py_DECREF(tmp_mult_expr_left_14);
        Py_DECREF(tmp_mult_expr_right_14);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 309;
        tmp_add_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_15 = mod_consts[73];
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_29 != NULL);
        tmp_expression_value_61 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[70]);
        if (tmp_mult_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_16);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[72]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_16);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_63 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_10 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_64 = var_xlim;
        tmp_subscript_value_20 = const_int_pos_1;
        tmp_cmp_expr_right_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_64, tmp_subscript_value_20, 1);
        if (tmp_cmp_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_16);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_subscript_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_16);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_16);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 310;
        tmp_mult_expr_right_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_mult_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_16);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_16, tmp_mult_expr_right_16);
        Py_DECREF(tmp_mult_expr_left_16);
        Py_DECREF(tmp_mult_expr_right_16);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 310;
        tmp_sub_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_31 != NULL);
        tmp_expression_value_65 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[70]);
        if (tmp_mult_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_17);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[72]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_17);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_67 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_11 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_68 = var_xlim;
        tmp_subscript_value_22 = const_int_pos_1;
        tmp_cmp_expr_right_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_22, 1);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_17);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_subscript_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_17);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_17);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 310;
        tmp_mult_expr_right_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_mult_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);
            Py_DECREF(tmp_mult_expr_left_17);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_17, tmp_mult_expr_right_17);
        Py_DECREF(tmp_mult_expr_left_17);
        Py_DECREF(tmp_mult_expr_right_17);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 310;
        tmp_sub_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_abs_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 310;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_15 = BUILTIN_ABS(tmp_abs_arg_3);
        Py_DECREF(tmp_abs_arg_3);
        if (tmp_mult_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_15, tmp_mult_expr_right_15);
        Py_DECREF(tmp_mult_expr_right_15);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_4);

            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            PyObject *tmp_mult_expr_left_18;
            PyObject *tmp_mult_expr_right_18;
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_mult_expr_left_19;
            PyObject *tmp_mult_expr_right_19;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_mult_expr_left_20;
            PyObject *tmp_mult_expr_right_20;
            PyObject *tmp_abs_arg_4;
            PyObject *tmp_sub_expr_left_6;
            PyObject *tmp_sub_expr_right_6;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_mult_expr_left_21;
            PyObject *tmp_mult_expr_right_21;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_mult_expr_left_22;
            PyObject *tmp_mult_expr_right_22;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_28;
            PyTuple_SET_ITEM(tmp_default_value_8, 0, tmp_tuple_element_9);
            tmp_expression_value_69 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_69 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[74]);
            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_70 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_70 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_33);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[119]);
            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 311;
            tmp_mult_expr_left_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_mult_expr_left_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_right_18 = mod_consts[120];
            tmp_add_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
            Py_DECREF(tmp_mult_expr_left_18);
            if (tmp_add_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_34 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_34 != NULL);
            tmp_expression_value_71 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_71 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_6);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[70]);
            if (tmp_mult_expr_left_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_72 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_72 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_19);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[72]);
            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_19);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_73 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_12 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_74 = var_xlim;
            tmp_subscript_value_24 = const_int_pos_1;
            tmp_cmp_expr_right_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_74, tmp_subscript_value_24, 1);
            if (tmp_cmp_expr_right_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_19);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_23 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            Py_DECREF(tmp_cmp_expr_right_12);
            if (tmp_subscript_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_19);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_23);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_19);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 311;
            tmp_mult_expr_right_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_mult_expr_right_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_19);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_25 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
            Py_DECREF(tmp_mult_expr_left_19);
            Py_DECREF(tmp_mult_expr_right_19);
            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 311;
            tmp_add_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_add_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_6);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            Py_DECREF(tmp_add_expr_left_6);
            Py_DECREF(tmp_add_expr_right_6);
            if (tmp_add_expr_left_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_20 = mod_consts[73];
            tmp_called_value_36 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_36 != NULL);
            tmp_expression_value_75 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_75 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[70]);
            if (tmp_mult_expr_left_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_76 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_76 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_mult_expr_left_21);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[72]);
            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_mult_expr_left_21);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_77 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_13 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_78 = var_xlim;
            tmp_subscript_value_26 = const_int_pos_1;
            tmp_cmp_expr_right_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_78, tmp_subscript_value_26, 1);
            if (tmp_cmp_expr_right_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_mult_expr_left_21);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_25 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            Py_DECREF(tmp_cmp_expr_right_13);
            if (tmp_subscript_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_mult_expr_left_21);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_25);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_mult_expr_left_21);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 312;
            tmp_mult_expr_right_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_mult_expr_right_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_mult_expr_left_21);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_27 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
            Py_DECREF(tmp_mult_expr_left_21);
            Py_DECREF(tmp_mult_expr_right_21);
            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 312;
            tmp_sub_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_sub_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_38 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_38 != NULL);
            tmp_expression_value_79 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_79 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_left_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[70]);
            if (tmp_mult_expr_left_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_expression_value_80 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_80 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_22);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[72]);
            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_22);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_81 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_14 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_82 = var_xlim;
            tmp_subscript_value_28 = const_int_pos_1;
            tmp_cmp_expr_right_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_82, tmp_subscript_value_28, 1);
            if (tmp_cmp_expr_right_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_22);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_subscript_value_27 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            Py_DECREF(tmp_cmp_expr_right_14);
            if (tmp_subscript_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_22);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_27);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_22);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 313;
            tmp_mult_expr_right_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_mult_expr_right_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);
                Py_DECREF(tmp_mult_expr_left_22);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_args_element_value_29 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
            Py_DECREF(tmp_mult_expr_left_22);
            Py_DECREF(tmp_mult_expr_right_22);
            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 313;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 312;
            tmp_sub_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_sub_expr_right_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_sub_expr_left_6);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_abs_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
            Py_DECREF(tmp_sub_expr_left_6);
            Py_DECREF(tmp_sub_expr_right_6);
            if (tmp_abs_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 312;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_mult_expr_right_20 = BUILTIN_ABS(tmp_abs_arg_4);
            Py_DECREF(tmp_abs_arg_4);
            if (tmp_mult_expr_right_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
            Py_DECREF(tmp_mult_expr_right_20);
            if (tmp_add_expr_right_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_5);

                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_tuple_element_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            Py_DECREF(tmp_add_expr_left_5);
            Py_DECREF(tmp_add_expr_right_5);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 311;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_default_value_8, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_default_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_36 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_36 == NULL) {
            tmp_assign_source_36 = tmp_default_value_8;
            Py_INCREF(tmp_assign_source_36);
        }
        Py_DECREF(tmp_default_value_8);
        assert(!(tmp_assign_source_36 == NULL));
        assert(var_ylim2 == NULL);
        var_ylim2 = tmp_assign_source_36;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[21];
        assert(var_prefix_str == NULL);
        Py_INCREF(tmp_assign_source_37);
        var_prefix_str = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_key_value_9;
        PyObject *tmp_default_value_9;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_mult_expr_left_23;
        PyObject *tmp_mult_expr_right_23;
        PyObject *tmp_abs_arg_5;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_subscript_value_34;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_9 = par_kwargs;
        tmp_key_value_9 = mod_consts[68];
        tmp_called_value_40 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_40 != NULL);
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_83 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_15 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_84 = var_xlim;
        tmp_subscript_value_30 = const_int_pos_1;
        tmp_cmp_expr_right_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_84, tmp_subscript_value_30, 1);
        if (tmp_cmp_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_29 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_right_15);
        if (tmp_subscript_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 317;
        tmp_sub_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_sub_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_23 = mod_consts[73];
        tmp_called_value_41 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_41 != NULL);
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_85 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_16 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_86 = var_xlim;
        tmp_subscript_value_32 = const_int_pos_1;
        tmp_cmp_expr_right_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_86, tmp_subscript_value_32, 1);
        if (tmp_cmp_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_right_16);
        if (tmp_subscript_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_31);
        Py_DECREF(tmp_subscript_value_31);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 318;
        tmp_sub_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_42 != NULL);
        CHECK_OBJECT(var_psd1);
        tmp_expression_value_87 = var_psd1;
        CHECK_OBJECT(var_frequencies1);
        tmp_cmp_expr_left_17 = var_frequencies1;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_88 = var_xlim;
        tmp_subscript_value_34 = const_int_pos_1;
        tmp_cmp_expr_right_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_88, tmp_subscript_value_34, 1);
        if (tmp_cmp_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_33 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_right_17);
        if (tmp_subscript_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_33);
        Py_DECREF(tmp_subscript_value_33);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 318;
        tmp_sub_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_sub_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);
            Py_DECREF(tmp_sub_expr_left_8);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        Py_DECREF(tmp_sub_expr_right_8);
        if (tmp_abs_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 318;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_23 = BUILTIN_ABS(tmp_abs_arg_5);
        Py_DECREF(tmp_abs_arg_5);
        if (tmp_mult_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_23, tmp_mult_expr_right_23);
        Py_DECREF(tmp_mult_expr_right_23);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_7);

            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_left_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_mult_expr_left_24;
            PyObject *tmp_mult_expr_right_24;
            PyObject *tmp_abs_arg_6;
            PyObject *tmp_sub_expr_left_9;
            PyObject *tmp_sub_expr_right_9;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_subscript_value_40;
            PyTuple_SET_ITEM(tmp_default_value_9, 0, tmp_tuple_element_10);
            tmp_called_value_43 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_43 != NULL);
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_89 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_18 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_90 = var_xlim;
            tmp_subscript_value_36 = const_int_pos_1;
            tmp_cmp_expr_right_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_90, tmp_subscript_value_36, 1);
            if (tmp_cmp_expr_right_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_subscript_value_35 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            Py_DECREF(tmp_cmp_expr_right_18);
            if (tmp_subscript_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_35);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 319;
            tmp_add_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_add_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_mult_expr_left_24 = mod_consts[73];
            tmp_called_value_44 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_44 != NULL);
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_91 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_19 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_92 = var_xlim;
            tmp_subscript_value_38 = const_int_pos_1;
            tmp_cmp_expr_right_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_92, tmp_subscript_value_38, 1);
            if (tmp_cmp_expr_right_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 320;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_subscript_value_37 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            Py_DECREF(tmp_cmp_expr_right_19);
            if (tmp_subscript_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 320;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_91, tmp_subscript_value_37);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 320;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 320;
            tmp_sub_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_sub_expr_left_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 320;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_called_value_45 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_45 != NULL);
            CHECK_OBJECT(var_psd1);
            tmp_expression_value_93 = var_psd1;
            CHECK_OBJECT(var_frequencies1);
            tmp_cmp_expr_left_20 = var_frequencies1;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_94 = var_xlim;
            tmp_subscript_value_40 = const_int_pos_1;
            tmp_cmp_expr_right_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_94, tmp_subscript_value_40, 1);
            if (tmp_cmp_expr_right_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 321;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_subscript_value_39 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            Py_DECREF(tmp_cmp_expr_right_20);
            if (tmp_subscript_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 321;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_args_element_value_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_39);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 321;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 320;
            tmp_sub_expr_right_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_sub_expr_right_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);
                Py_DECREF(tmp_sub_expr_left_9);

                exception_lineno = 320;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_abs_arg_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
            Py_DECREF(tmp_sub_expr_left_9);
            Py_DECREF(tmp_sub_expr_right_9);
            if (tmp_abs_arg_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 320;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_mult_expr_right_24 = BUILTIN_ABS(tmp_abs_arg_6);
            Py_DECREF(tmp_abs_arg_6);
            if (tmp_mult_expr_right_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_add_expr_right_7 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_24, tmp_mult_expr_right_24);
            Py_DECREF(tmp_mult_expr_right_24);
            if (tmp_add_expr_right_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
            Py_DECREF(tmp_add_expr_left_7);
            Py_DECREF(tmp_add_expr_right_7);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 319;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_default_value_9, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_default_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_38 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_9, tmp_key_value_9);
        if (tmp_assign_source_38 == NULL) {
            tmp_assign_source_38 = tmp_default_value_9;
            Py_INCREF(tmp_assign_source_38);
        }
        Py_DECREF(tmp_default_value_9);
        assert(!(tmp_assign_source_38 == NULL));
        assert(var_ylim1 == NULL);
        var_ylim1 = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_key_value_10;
        PyObject *tmp_default_value_10;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_mult_expr_left_25;
        PyObject *tmp_mult_expr_right_25;
        PyObject *tmp_abs_arg_7;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_46;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_10 = par_kwargs;
        tmp_key_value_10 = mod_consts[68];
        tmp_called_value_46 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_46 != NULL);
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_95 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_21 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_96 = var_xlim;
        tmp_subscript_value_42 = const_int_pos_1;
        tmp_cmp_expr_right_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_96, tmp_subscript_value_42, 1);
        if (tmp_cmp_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_41 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        Py_DECREF(tmp_cmp_expr_right_21);
        if (tmp_subscript_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_41);
        Py_DECREF(tmp_subscript_value_41);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 322;
        tmp_sub_expr_left_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_sub_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_25 = mod_consts[73];
        tmp_called_value_47 = LOOKUP_BUILTIN(mod_consts[74]);
        assert(tmp_called_value_47 != NULL);
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_97 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_22 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_98 = var_xlim;
        tmp_subscript_value_44 = const_int_pos_1;
        tmp_cmp_expr_right_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_98, tmp_subscript_value_44, 1);
        if (tmp_cmp_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_right_22);
        if (tmp_subscript_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_97, tmp_subscript_value_43);
        Py_DECREF(tmp_subscript_value_43);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 323;
        tmp_sub_expr_left_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_sub_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_BUILTIN(mod_consts[69]);
        assert(tmp_called_value_48 != NULL);
        CHECK_OBJECT(var_psd2);
        tmp_expression_value_99 = var_psd2;
        CHECK_OBJECT(var_frequencies2);
        tmp_cmp_expr_left_23 = var_frequencies2;
        CHECK_OBJECT(var_xlim);
        tmp_expression_value_100 = var_xlim;
        tmp_subscript_value_46 = const_int_pos_1;
        tmp_cmp_expr_right_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_100, tmp_subscript_value_46, 1);
        if (tmp_cmp_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_45 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        Py_DECREF(tmp_cmp_expr_right_23);
        if (tmp_subscript_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_45);
        Py_DECREF(tmp_subscript_value_45);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 323;
        tmp_sub_expr_right_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_sub_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);
            Py_DECREF(tmp_sub_expr_left_11);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_abs_arg_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        Py_DECREF(tmp_sub_expr_left_11);
        Py_DECREF(tmp_sub_expr_right_11);
        if (tmp_abs_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 323;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_25 = BUILTIN_ABS(tmp_abs_arg_7);
        Py_DECREF(tmp_abs_arg_7);
        if (tmp_mult_expr_right_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_10 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_25, tmp_mult_expr_right_25);
        Py_DECREF(tmp_mult_expr_right_25);
        if (tmp_sub_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_sub_expr_left_10);

            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        Py_DECREF(tmp_sub_expr_left_10);
        Py_DECREF(tmp_sub_expr_right_10);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_mult_expr_left_26;
            PyObject *tmp_mult_expr_right_26;
            PyObject *tmp_abs_arg_8;
            PyObject *tmp_sub_expr_left_12;
            PyObject *tmp_sub_expr_right_12;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_subscript_value_50;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_subscript_value_52;
            PyTuple_SET_ITEM(tmp_default_value_10, 0, tmp_tuple_element_11);
            tmp_called_value_49 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_49 != NULL);
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_101 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_24 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_102 = var_xlim;
            tmp_subscript_value_48 = const_int_pos_1;
            tmp_cmp_expr_right_24 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_102, tmp_subscript_value_48, 1);
            if (tmp_cmp_expr_right_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_subscript_value_47 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            Py_DECREF(tmp_cmp_expr_right_24);
            if (tmp_subscript_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_101, tmp_subscript_value_47);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_args_element_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 324;
            tmp_add_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_add_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_mult_expr_left_26 = mod_consts[73];
            tmp_called_value_50 = LOOKUP_BUILTIN(mod_consts[74]);
            assert(tmp_called_value_50 != NULL);
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_103 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_25 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_104 = var_xlim;
            tmp_subscript_value_50 = const_int_pos_1;
            tmp_cmp_expr_right_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_104, tmp_subscript_value_50, 1);
            if (tmp_cmp_expr_right_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 325;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_subscript_value_49 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            Py_DECREF(tmp_cmp_expr_right_25);
            if (tmp_subscript_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 325;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_49);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 325;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 325;
            tmp_sub_expr_left_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_sub_expr_left_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 325;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_called_value_51 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_51 != NULL);
            CHECK_OBJECT(var_psd2);
            tmp_expression_value_105 = var_psd2;
            CHECK_OBJECT(var_frequencies2);
            tmp_cmp_expr_left_26 = var_frequencies2;
            CHECK_OBJECT(var_xlim);
            tmp_expression_value_106 = var_xlim;
            tmp_subscript_value_52 = const_int_pos_1;
            tmp_cmp_expr_right_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_106, tmp_subscript_value_52, 1);
            if (tmp_cmp_expr_right_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 326;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_subscript_value_51 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            Py_DECREF(tmp_cmp_expr_right_26);
            if (tmp_subscript_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 326;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_51);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_args_element_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 326;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 325;
            tmp_sub_expr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_sub_expr_right_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);
                Py_DECREF(tmp_sub_expr_left_12);

                exception_lineno = 325;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_abs_arg_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
            Py_DECREF(tmp_sub_expr_left_12);
            Py_DECREF(tmp_sub_expr_right_12);
            if (tmp_abs_arg_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 325;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_mult_expr_right_26 = BUILTIN_ABS(tmp_abs_arg_8);
            Py_DECREF(tmp_abs_arg_8);
            if (tmp_mult_expr_right_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_add_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_26, tmp_mult_expr_right_26);
            Py_DECREF(tmp_mult_expr_right_26);
            if (tmp_add_expr_right_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_add_expr_left_8);

                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
            Py_DECREF(tmp_add_expr_left_8);
            Py_DECREF(tmp_add_expr_right_8);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 324;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_default_value_10, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_default_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_39 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_10, tmp_key_value_10);
        if (tmp_assign_source_39 == NULL) {
            tmp_assign_source_39 = tmp_default_value_10;
            Py_INCREF(tmp_assign_source_39);
        }
        Py_DECREF(tmp_default_value_10);
        assert(!(tmp_assign_source_39 == NULL));
        assert(var_ylim2 == NULL);
        var_ylim2 = tmp_assign_source_39;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_1 = mod_consts[1];
        CHECK_OBJECT(var_fig);
        tmp_dict_value_3 = var_fig;
        tmp_assign_source_40 = _PyDict_NewPresized( 19 );
        {
            PyObject *tmp_dict_arg_value_11;
            PyObject *tmp_key_value_11;
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_kw_call_arg_value_0_5;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_kw_call_arg_value_2_1;
            PyObject *tmp_dict_arg_value_12;
            PyObject *tmp_key_value_12;
            PyObject *tmp_default_value_11;
            PyObject *tmp_called_value_53;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_109;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[75];
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_11 = par_kwargs;
            tmp_key_value_11 = mod_consts[75];
            tmp_dict_value_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_11, tmp_key_value_11);
            if (tmp_dict_value_3 == NULL) {
                tmp_dict_value_3 = Py_None;
                Py_INCREF_IMMORTAL(tmp_dict_value_3);
            }
            assert(!(tmp_dict_value_3 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[76];
            tmp_dict_value_3 = mod_consts[121];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[78];
            CHECK_OBJECT(var_ax1);
            tmp_dict_value_3 = var_ax1;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[44];
            CHECK_OBJECT(var_xlim);
            tmp_dict_value_3 = var_xlim;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[68];
            CHECK_OBJECT(var_ylim1);
            tmp_dict_value_3 = var_ylim1;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            tmp_dict_value_3 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[81];
            tmp_dict_value_3 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            CHECK_OBJECT(par_title);
            tmp_dict_value_3 = par_title;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[82];
            CHECK_OBJECT(par_color);
            tmp_expression_value_107 = par_color;
            tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[83]);
            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 338;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 338;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_52, mod_consts[84]);

            Py_DECREF(tmp_called_value_52);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 338;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_dict_value_3 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            tmp_dict_value_3 = mod_consts[55];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];
            tmp_dict_value_3 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];
            tmp_kw_call_arg_value_0_5 = mod_consts[91];
            CHECK_OBJECT(var_prefix_str);
            tmp_kw_call_arg_value_1_1 = var_prefix_str;
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_12 = par_kwargs;
            tmp_key_value_12 = mod_consts[92];
            tmp_default_value_11 = mod_consts[93];
            tmp_kw_call_arg_value_2_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_12, tmp_key_value_12);
            if (tmp_kw_call_arg_value_2_1 == NULL) {
                tmp_kw_call_arg_value_2_1 = tmp_default_value_11;
                Py_INCREF(tmp_kw_call_arg_value_2_1);
            }
            assert(!(tmp_kw_call_arg_value_2_1 == NULL));
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 342;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
                tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
            }

            Py_DECREF(tmp_kw_call_arg_value_2_1);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 342;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];
            tmp_dict_value_3 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];
            CHECK_OBJECT(par_color);
            tmp_expression_value_108 = par_color;
            tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[83]);
            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 344;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_53, mod_consts[84]);

            Py_DECREF(tmp_called_value_53);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 344;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[97];
            tmp_dict_value_3 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            CHECK_OBJECT(par_color);
            tmp_expression_value_109 = par_color;
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[83]);
            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 346;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 346;
            tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_54, mod_consts[84]);

            Py_DECREF(tmp_called_value_54);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 346;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[99];
            tmp_dict_value_3 = mod_consts[100];
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_40);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_Param1 == NULL);
        var_Param1 = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_2 = mod_consts[1];
        CHECK_OBJECT(var_fig);
        tmp_dict_value_4 = var_fig;
        tmp_assign_source_41 = _PyDict_NewPresized( 19 );
        {
            PyObject *tmp_dict_arg_value_13;
            PyObject *tmp_key_value_13;
            PyObject *tmp_called_value_55;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_kw_call_arg_value_0_6;
            PyObject *tmp_kw_call_arg_value_1_2;
            PyObject *tmp_kw_call_arg_value_2_2;
            PyObject *tmp_dict_arg_value_14;
            PyObject *tmp_key_value_14;
            PyObject *tmp_default_value_12;
            PyObject *tmp_called_value_56;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_called_value_57;
            PyObject *tmp_expression_value_112;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[75];
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_13 = par_kwargs;
            tmp_key_value_13 = mod_consts[75];
            tmp_dict_value_4 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_13, tmp_key_value_13);
            if (tmp_dict_value_4 == NULL) {
                tmp_dict_value_4 = Py_None;
                Py_INCREF_IMMORTAL(tmp_dict_value_4);
            }
            assert(!(tmp_dict_value_4 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[76];
            tmp_dict_value_4 = mod_consts[121];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[78];
            CHECK_OBJECT(var_ax2);
            tmp_dict_value_4 = var_ax2;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[44];
            CHECK_OBJECT(var_xlim);
            tmp_dict_value_4 = var_xlim;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[68];
            CHECK_OBJECT(var_ylim2);
            tmp_dict_value_4 = var_ylim2;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[79];
            tmp_dict_value_4 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[81];
            tmp_dict_value_4 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[31];
            CHECK_OBJECT(par_title);
            tmp_dict_value_4 = par_title;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[82];
            CHECK_OBJECT(par_color);
            tmp_expression_value_110 = par_color;
            tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[83]);
            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 359;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 359;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_55, mod_consts[101]);

            Py_DECREF(tmp_called_value_55);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 359;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[85];
            tmp_dict_value_4 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[87];
            tmp_dict_value_4 = mod_consts[55];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[88];
            tmp_dict_value_4 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[90];
            tmp_kw_call_arg_value_0_6 = mod_consts[91];
            CHECK_OBJECT(var_prefix_str);
            tmp_kw_call_arg_value_1_2 = var_prefix_str;
            CHECK_OBJECT(par_kwargs);
            tmp_dict_arg_value_14 = par_kwargs;
            tmp_key_value_14 = mod_consts[102];
            tmp_default_value_12 = mod_consts[103];
            tmp_kw_call_arg_value_2_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_14, tmp_key_value_14);
            if (tmp_kw_call_arg_value_2_2 == NULL) {
                tmp_kw_call_arg_value_2_2 = tmp_default_value_12;
                Py_INCREF(tmp_kw_call_arg_value_2_2);
            }
            assert(!(tmp_kw_call_arg_value_2_2 == NULL));
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 363;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
                tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
            }

            Py_DECREF(tmp_kw_call_arg_value_2_2);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 363;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[94];
            tmp_dict_value_4 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[96];
            CHECK_OBJECT(par_color);
            tmp_expression_value_111 = par_color;
            tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[83]);
            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 365;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 365;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_56, mod_consts[101]);

            Py_DECREF(tmp_called_value_56);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 365;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[97];
            tmp_dict_value_4 = mod_consts[95];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[98];
            CHECK_OBJECT(par_color);
            tmp_expression_value_112 = par_color;
            tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[83]);
            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 367;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 367;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_57, mod_consts[101]);

            Py_DECREF(tmp_called_value_57);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 367;
                type_description_1 = "oooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[99];
            tmp_dict_value_4 = mod_consts[104];
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_41);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(var_Param2 == NULL);
        var_Param2 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_expression_value_114;
        tmp_expression_value_114 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Source(tstate);
        if (unlikely(tmp_expression_value_114 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[106]);
        if (tmp_expression_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[107]);
        Py_DECREF(tmp_expression_value_113);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 371;
        tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_58);
        Py_DECREF(tmp_called_value_58);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_kwargs1 == NULL);
        var_kwargs1 = tmp_assign_source_42;
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_43;
        CHECK_OBJECT(var_kwargs1);
        tmp_expression_value_115 = var_kwargs1;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[108]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Param1);
        tmp_args_element_value_43 = var_Param1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 372;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_expression_value_117;
        tmp_expression_value_117 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Source(tstate);
        if (unlikely(tmp_expression_value_117 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[106]);
        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[107]);
        Py_DECREF(tmp_expression_value_116);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 373;
        tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_60);
        Py_DECREF(tmp_called_value_60);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 373;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_kwargs2 == NULL);
        var_kwargs2 = tmp_assign_source_43;
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_44;
        CHECK_OBJECT(var_kwargs2);
        tmp_expression_value_118 = var_kwargs2;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[108]);
        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Param2);
        tmp_args_element_value_44 = var_Param2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 374;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_61);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_dict_arg_value_15;
        PyObject *tmp_key_value_15;
        PyObject *tmp_default_value_13;
        PyObject *tmp_dict_value_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_15 = par_kwargs;
        tmp_key_value_15 = mod_consts[66];
        tmp_default_value_13 = Py_True;
        tmp_dict_value_5 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_15, tmp_key_value_15);
        if (tmp_dict_value_5 == NULL) {
            tmp_dict_value_5 = tmp_default_value_13;
            Py_INCREF(tmp_dict_value_5);
        }
        assert(!(tmp_dict_value_5 == NULL));
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_dict_value_5);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_dict_value_5);

            exception_lineno = 376;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_dict_value_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_direct_call_arg1_1;
        PyObject *tmp_direct_call_arg2_1;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_direct_call_arg3_1;
        PyObject *tmp_call_result_4;
        tmp_direct_call_arg1_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies1);
        tmp_tuple_element_12 = var_frequencies1;
        tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_mult_expr_left_27;
            PyObject *tmp_mult_expr_right_27;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_45;
            PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_12);
            tmp_expression_value_119 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_119 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_mult_expr_left_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[70]);
            if (tmp_mult_expr_left_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_called_instance_5 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_called_instance_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_mult_expr_left_27);

                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_psd1);
            tmp_args_element_value_45 = var_psd1;
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 377;
            tmp_mult_expr_right_27 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[72], tmp_args_element_value_45);
            if (tmp_mult_expr_right_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_27);

                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_12 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_27, tmp_mult_expr_right_27);
            Py_DECREF(tmp_mult_expr_left_27);
            Py_DECREF(tmp_mult_expr_right_27);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 377;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_direct_call_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        CHECK_OBJECT(var_kwargs1);
        tmp_direct_call_arg3_1 = var_kwargs1;
        Py_INCREF(tmp_direct_call_arg1_1);
        Py_INCREF(tmp_direct_call_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
            tmp_call_result_4 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_direct_call_arg1_2;
        PyObject *tmp_direct_call_arg2_2;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_direct_call_arg3_2;
        PyObject *tmp_call_result_5;
        tmp_direct_call_arg1_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies2);
        tmp_tuple_element_13 = var_frequencies2;
        tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_mult_expr_left_28;
            PyObject *tmp_mult_expr_right_28;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_46;
            PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_13);
            tmp_expression_value_120 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
            if (unlikely(tmp_expression_value_120 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_mult_expr_left_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[70]);
            if (tmp_mult_expr_left_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_called_instance_6 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_called_instance_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_mult_expr_left_28);

                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            CHECK_OBJECT(var_psd2);
            tmp_args_element_value_46 = var_psd2;
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 378;
            tmp_mult_expr_right_28 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[72], tmp_args_element_value_46);
            if (tmp_mult_expr_right_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_mult_expr_left_28);

                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_28, tmp_mult_expr_right_28);
            Py_DECREF(tmp_mult_expr_left_28);
            Py_DECREF(tmp_mult_expr_right_28);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 378;
                type_description_1 = "oooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_direct_call_arg2_2, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_direct_call_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        CHECK_OBJECT(var_kwargs2);
        tmp_direct_call_arg3_2 = var_kwargs2;
        Py_INCREF(tmp_direct_call_arg1_2);
        Py_INCREF(tmp_direct_call_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
            tmp_call_result_5 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_sub_expr_left_13;
        PyObject *tmp_sub_expr_right_13;
        PyObject *tmp_mult_expr_left_29;
        PyObject *tmp_mult_expr_right_29;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_mult_expr_left_30;
        PyObject *tmp_mult_expr_right_30;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_mult_expr_left_31;
        PyObject *tmp_mult_expr_right_31;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_mult_expr_left_32;
        PyObject *tmp_mult_expr_right_32;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_5;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(var_ax1);
        tmp_expression_value_121 = var_ax1;
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[122]);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies1);
        tmp_kw_call_arg_value_0_7 = var_frequencies1;
        tmp_expression_value_122 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_122 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_62);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[70]);
        if (tmp_mult_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_mult_expr_left_29);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_args_element_value_47 = var_psd1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 379;
        tmp_mult_expr_right_29 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[72], tmp_args_element_value_47);
        if (tmp_mult_expr_right_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_mult_expr_left_29);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_29, tmp_mult_expr_right_29);
        Py_DECREF(tmp_mult_expr_left_29);
        Py_DECREF(tmp_mult_expr_right_29);
        if (tmp_sub_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_30 = mod_consts[120];
        CHECK_OBJECT(var_psd1_std);
        tmp_mult_expr_right_30 = var_psd1_std;
        tmp_sub_expr_right_13 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_30, tmp_mult_expr_right_30);
        if (tmp_sub_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_sub_expr_left_13);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
        Py_DECREF(tmp_sub_expr_left_13);
        Py_DECREF(tmp_sub_expr_right_13);
        if (tmp_kw_call_arg_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_123 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[70]);
        if (tmp_mult_expr_left_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_called_instance_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);
            Py_DECREF(tmp_mult_expr_left_31);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_args_element_value_48 = var_psd1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 379;
        tmp_mult_expr_right_31 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[72], tmp_args_element_value_48);
        if (tmp_mult_expr_right_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);
            Py_DECREF(tmp_mult_expr_left_31);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_31, tmp_mult_expr_right_31);
        Py_DECREF(tmp_mult_expr_left_31);
        Py_DECREF(tmp_mult_expr_right_31);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_32 = mod_consts[120];
        CHECK_OBJECT(var_psd1_std);
        tmp_mult_expr_right_32 = var_psd1_std;
        tmp_add_expr_right_9 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_32, tmp_mult_expr_right_32);
        if (tmp_add_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_kw_call_arg_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_5 = mod_consts[73];
        CHECK_OBJECT(par_color);
        tmp_expression_value_124 = par_color;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[83]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);
            Py_DECREF(tmp_kw_call_arg_value_2_3);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 379;
        tmp_kw_call_dict_value_1_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_63, mod_consts[84]);

        Py_DECREF(tmp_called_value_63);
        if (tmp_kw_call_dict_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_kw_call_arg_value_1_3);
            Py_DECREF(tmp_kw_call_arg_value_2_3);

            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 379;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_62, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_kw_call_arg_value_1_3);
        Py_DECREF(tmp_kw_call_arg_value_2_3);
        Py_DECREF(tmp_kw_call_dict_value_1_5);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_sub_expr_left_14;
        PyObject *tmp_sub_expr_right_14;
        PyObject *tmp_mult_expr_left_33;
        PyObject *tmp_mult_expr_right_33;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_mult_expr_left_34;
        PyObject *tmp_mult_expr_right_34;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_mult_expr_left_35;
        PyObject *tmp_mult_expr_right_35;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_mult_expr_left_36;
        PyObject *tmp_mult_expr_right_36;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_kw_call_dict_value_1_6;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(var_ax2);
        tmp_expression_value_125 = var_ax2;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[122]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies2);
        tmp_kw_call_arg_value_0_8 = var_frequencies2;
        tmp_expression_value_126 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_126 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_64);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[70]);
        if (tmp_mult_expr_left_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_called_instance_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_mult_expr_left_33);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_args_element_value_49 = var_psd2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 380;
        tmp_mult_expr_right_33 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[72], tmp_args_element_value_49);
        if (tmp_mult_expr_right_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_mult_expr_left_33);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_33, tmp_mult_expr_right_33);
        Py_DECREF(tmp_mult_expr_left_33);
        Py_DECREF(tmp_mult_expr_right_33);
        if (tmp_sub_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_34 = mod_consts[120];
        CHECK_OBJECT(var_psd2_std);
        tmp_mult_expr_right_34 = var_psd2_std;
        tmp_sub_expr_right_14 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_34, tmp_mult_expr_right_34);
        if (tmp_sub_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_sub_expr_left_14);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_14, tmp_sub_expr_right_14);
        Py_DECREF(tmp_sub_expr_left_14);
        Py_DECREF(tmp_sub_expr_right_14);
        if (tmp_kw_call_arg_value_1_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_PSD(tstate);
        if (unlikely(tmp_expression_value_127 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[70]);
        if (tmp_mult_expr_left_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_called_instance_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_mult_expr_left_35);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_args_element_value_50 = var_psd2;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 380;
        tmp_mult_expr_right_35 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[72], tmp_args_element_value_50);
        if (tmp_mult_expr_right_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_mult_expr_left_35);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_35, tmp_mult_expr_right_35);
        Py_DECREF(tmp_mult_expr_left_35);
        Py_DECREF(tmp_mult_expr_right_35);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_36 = mod_consts[120];
        CHECK_OBJECT(var_psd2_std);
        tmp_mult_expr_right_36 = var_psd2_std;
        tmp_add_expr_right_10 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_36, tmp_mult_expr_right_36);
        if (tmp_add_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_kw_call_arg_value_2_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_6 = mod_consts[73];
        CHECK_OBJECT(par_color);
        tmp_expression_value_128 = par_color;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[83]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_kw_call_arg_value_2_4);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 380;
        tmp_kw_call_dict_value_1_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_65, mod_consts[101]);

        Py_DECREF(tmp_called_value_65);
        if (tmp_kw_call_dict_value_1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_kw_call_arg_value_2_4);

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 380;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_64, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_kw_call_arg_value_1_4);
        Py_DECREF(tmp_kw_call_arg_value_2_4);
        Py_DECREF(tmp_kw_call_dict_value_1_6);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_direct_call_arg1_3;
        PyObject *tmp_direct_call_arg2_3;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_direct_call_arg3_3;
        PyObject *tmp_call_result_8;
        tmp_direct_call_arg1_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 383;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies1);
        tmp_tuple_element_14 = var_frequencies1;
        tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 0, tmp_tuple_element_14);
        CHECK_OBJECT(var_psd1);
        tmp_tuple_element_14 = var_psd1;
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 1, tmp_tuple_element_14);
        CHECK_OBJECT(var_kwargs1);
        tmp_direct_call_arg3_3 = var_kwargs1;
        Py_INCREF(tmp_direct_call_arg1_3);
        Py_INCREF(tmp_direct_call_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3};
            tmp_call_result_8 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 383;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_direct_call_arg1_4;
        PyObject *tmp_direct_call_arg2_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_direct_call_arg3_4;
        PyObject *tmp_call_result_9;
        tmp_direct_call_arg1_4 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_figure_sync_plot(tstate);
        if (unlikely(tmp_direct_call_arg1_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_direct_call_arg1_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies2);
        tmp_tuple_element_15 = var_frequencies2;
        tmp_direct_call_arg2_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 0, tmp_tuple_element_15);
        CHECK_OBJECT(var_psd2);
        tmp_tuple_element_15 = var_psd2;
        PyTuple_SET_ITEM0(tmp_direct_call_arg2_4, 1, tmp_tuple_element_15);
        CHECK_OBJECT(var_kwargs2);
        tmp_direct_call_arg3_4 = var_kwargs2;
        Py_INCREF(tmp_direct_call_arg1_4);
        Py_INCREF(tmp_direct_call_arg3_4);

        {
            PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4, tmp_direct_call_arg3_4};
            tmp_call_result_9 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_sub_expr_left_15;
        PyObject *tmp_sub_expr_right_15;
        PyObject *tmp_mult_expr_left_37;
        PyObject *tmp_mult_expr_right_37;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_mult_expr_left_38;
        PyObject *tmp_mult_expr_right_38;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_kw_call_dict_value_1_7;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(var_ax1);
        tmp_expression_value_129 = var_ax1;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[122]);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies1);
        tmp_kw_call_arg_value_0_9 = var_frequencies1;
        CHECK_OBJECT(var_psd1);
        tmp_sub_expr_left_15 = var_psd1;
        tmp_mult_expr_left_37 = mod_consts[120];
        CHECK_OBJECT(var_psd1_std);
        tmp_mult_expr_right_37 = var_psd1_std;
        tmp_sub_expr_right_15 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_37, tmp_mult_expr_right_37);
        if (tmp_sub_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_15, tmp_sub_expr_right_15);
        Py_DECREF(tmp_sub_expr_right_15);
        if (tmp_kw_call_arg_value_1_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd1);
        tmp_add_expr_left_11 = var_psd1;
        tmp_mult_expr_left_38 = mod_consts[120];
        CHECK_OBJECT(var_psd1_std);
        tmp_mult_expr_right_38 = var_psd1_std;
        tmp_add_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_38, tmp_mult_expr_right_38);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_kw_call_arg_value_1_5);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_kw_call_arg_value_2_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_kw_call_arg_value_1_5);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_7 = mod_consts[73];
        CHECK_OBJECT(par_color);
        tmp_expression_value_130 = par_color;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[83]);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            Py_DECREF(tmp_kw_call_arg_value_2_5);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 385;
        tmp_kw_call_dict_value_1_7 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_67, mod_consts[84]);

        Py_DECREF(tmp_called_value_67);
        if (tmp_kw_call_dict_value_1_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            Py_DECREF(tmp_kw_call_arg_value_2_5);

            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 385;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_7};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_66, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_kw_call_arg_value_1_5);
        Py_DECREF(tmp_kw_call_arg_value_2_5);
        Py_DECREF(tmp_kw_call_dict_value_1_7);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_sub_expr_left_16;
        PyObject *tmp_sub_expr_right_16;
        PyObject *tmp_mult_expr_left_39;
        PyObject *tmp_mult_expr_right_39;
        PyObject *tmp_kw_call_arg_value_2_6;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_mult_expr_left_40;
        PyObject *tmp_mult_expr_right_40;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_8;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_132;
        CHECK_OBJECT(var_ax2);
        tmp_expression_value_131 = var_ax2;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[122]);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frequencies2);
        tmp_kw_call_arg_value_0_10 = var_frequencies2;
        CHECK_OBJECT(var_psd2);
        tmp_sub_expr_left_16 = var_psd2;
        tmp_mult_expr_left_39 = mod_consts[120];
        CHECK_OBJECT(var_psd2_std);
        tmp_mult_expr_right_39 = var_psd2_std;
        tmp_sub_expr_right_16 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_39, tmp_mult_expr_right_39);
        if (tmp_sub_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_16, tmp_sub_expr_right_16);
        Py_DECREF(tmp_sub_expr_right_16);
        if (tmp_kw_call_arg_value_1_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_psd2);
        tmp_add_expr_left_12 = var_psd2;
        tmp_mult_expr_left_40 = mod_consts[120];
        CHECK_OBJECT(var_psd2_std);
        tmp_mult_expr_right_40 = var_psd2_std;
        tmp_add_expr_right_12 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_40, tmp_mult_expr_right_40);
        if (tmp_add_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_kw_call_arg_value_1_6);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_2_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_kw_call_arg_value_2_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_kw_call_arg_value_1_6);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_8 = mod_consts[73];
        CHECK_OBJECT(par_color);
        tmp_expression_value_132 = par_color;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[83]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_kw_call_arg_value_1_6);
            Py_DECREF(tmp_kw_call_arg_value_2_6);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 386;
        tmp_kw_call_dict_value_1_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_69, mod_consts[101]);

        Py_DECREF(tmp_called_value_69);
        if (tmp_kw_call_dict_value_1_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_kw_call_arg_value_1_6);
            Py_DECREF(tmp_kw_call_arg_value_2_6);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 386;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_6};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_8};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_68, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_kw_call_arg_value_1_6);
        Py_DECREF(tmp_kw_call_arg_value_2_6);
        Py_DECREF(tmp_kw_call_dict_value_1_8);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_end_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_key_value_16;
        PyObject *tmp_default_value_14;
        PyObject *tmp_dict_value_6;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_16 = par_kwargs;
        tmp_key_value_16 = mod_consts[110];
        tmp_default_value_14 = Py_False;
        tmp_dict_value_6 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_16, tmp_key_value_16);
        if (tmp_dict_value_6 == NULL) {
            tmp_dict_value_6 = tmp_default_value_14;
            Py_INCREF(tmp_dict_value_6);
        }
        assert(!(tmp_dict_value_6 == NULL));
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_dict_value_6);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_dict_value_6);

            exception_lineno = 389;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_dict_value_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_call_result_12;
        tmp_expression_value_133 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_plt(tstate);
        if (unlikely(tmp_expression_value_133 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 390;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[38]);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame.f_lineno = 390;
        tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_70, &PyTuple_GET_ITEM(mod_consts[28], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_70);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band,
        type_description_1,
        par_data1,
        par_data2,
        par_fs,
        par_title,
        par_color,
        par_kwargs,
        var_tool,
        var_xlim,
        var_frequencies1,
        var_psd1,
        var_frequencies2,
        var_psd2,
        var_psd1_std,
        var_psd2_std,
        var_fig,
        var_ax1,
        var_ax2,
        var_prefix_str,
        var_ylim1,
        var_ylim2,
        var_Param1,
        var_Param2,
        var_kwargs1,
        var_kwargs2
    );


    // Release cached frame if used for exception.
    if (frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band == cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band);
        cache_frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band = NULL;
    }

    assertFrameObject(frame_frame_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_fig);
    tmp_return_value = var_fig;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    par_color = NULL;
    CHECK_OBJECT(var_tool);
    Py_DECREF(var_tool);
    var_tool = NULL;
    CHECK_OBJECT(var_xlim);
    Py_DECREF(var_xlim);
    var_xlim = NULL;
    Py_XDECREF(var_frequencies1);
    var_frequencies1 = NULL;
    Py_XDECREF(var_psd1);
    var_psd1 = NULL;
    Py_XDECREF(var_frequencies2);
    var_frequencies2 = NULL;
    Py_XDECREF(var_psd2);
    var_psd2 = NULL;
    Py_XDECREF(var_psd1_std);
    var_psd1_std = NULL;
    Py_XDECREF(var_psd2_std);
    var_psd2_std = NULL;
    CHECK_OBJECT(var_fig);
    Py_DECREF(var_fig);
    var_fig = NULL;
    CHECK_OBJECT(var_ax1);
    Py_DECREF(var_ax1);
    var_ax1 = NULL;
    CHECK_OBJECT(var_ax2);
    Py_DECREF(var_ax2);
    var_ax2 = NULL;
    CHECK_OBJECT(var_prefix_str);
    Py_DECREF(var_prefix_str);
    var_prefix_str = NULL;
    CHECK_OBJECT(var_ylim1);
    Py_DECREF(var_ylim1);
    var_ylim1 = NULL;
    CHECK_OBJECT(var_ylim2);
    Py_DECREF(var_ylim2);
    var_ylim2 = NULL;
    CHECK_OBJECT(var_Param1);
    Py_DECREF(var_Param1);
    var_Param1 = NULL;
    CHECK_OBJECT(var_Param2);
    Py_DECREF(var_Param2);
    var_Param2 = NULL;
    CHECK_OBJECT(var_kwargs1);
    Py_DECREF(var_kwargs1);
    var_kwargs1 = NULL;
    CHECK_OBJECT(var_kwargs2);
    Py_DECREF(var_kwargs2);
    var_kwargs2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_color);
    par_color = NULL;
    Py_XDECREF(var_tool);
    var_tool = NULL;
    Py_XDECREF(var_xlim);
    var_xlim = NULL;
    Py_XDECREF(var_frequencies1);
    var_frequencies1 = NULL;
    Py_XDECREF(var_psd1);
    var_psd1 = NULL;
    Py_XDECREF(var_frequencies2);
    var_frequencies2 = NULL;
    Py_XDECREF(var_psd2);
    var_psd2 = NULL;
    Py_XDECREF(var_psd1_std);
    var_psd1_std = NULL;
    Py_XDECREF(var_psd2_std);
    var_psd2_std = NULL;
    Py_XDECREF(var_fig);
    var_fig = NULL;
    Py_XDECREF(var_ax1);
    var_ax1 = NULL;
    Py_XDECREF(var_ax2);
    var_ax2 = NULL;
    Py_XDECREF(var_prefix_str);
    var_prefix_str = NULL;
    Py_XDECREF(var_ylim1);
    var_ylim1 = NULL;
    Py_XDECREF(var_ylim2);
    var_ylim2 = NULL;
    Py_XDECREF(var_Param1);
    var_Param1 = NULL;
    Py_XDECREF(var_Param2);
    var_Param2 = NULL;
    Py_XDECREF(var_kwargs1);
    var_kwargs1 = NULL;
    Py_XDECREF(var_kwargs2);
    var_kwargs2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data1);
    Py_DECREF(par_data1);
    CHECK_OBJECT(par_data2);
    Py_DECREF(par_data2);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data1);
    Py_DECREF(par_data1);
    CHECK_OBJECT(par_data2);
    Py_DECREF(par_data2);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6502898de6fc91eca6acfcfc2a9f815b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_GUI_Function$Analyse$PowerSpectralDensity,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9d5f91f69cd377b43cf14b2164f5b14d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_GUI_Function$Analyse$PowerSpectralDensity,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3e51ebc644162fa7e7e4a8c47647d5a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_GUI_Function$Analyse$PowerSpectralDensity,
        mod_consts[124],
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

static function_impl_code const function_table_GUI_Function$Analyse$PowerSpectralDensity[] = {
    impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot,
    impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot,
    impl_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_GUI_Function$Analyse$PowerSpectralDensity);

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
        module_GUI_Function$Analyse$PowerSpectralDensity,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_GUI_Function$Analyse$PowerSpectralDensity,
        sizeof(function_table_GUI_Function$Analyse$PowerSpectralDensity) / sizeof(function_impl_code)
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
static char const *module_full_name = "GUI_Function.Analyse.PowerSpectralDensity";
#endif

// Internal entry point for module code.
PyObject *modulecode_GUI_Function$Analyse$PowerSpectralDensity(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("GUI_Function$Analyse$PowerSpectralDensity");

    // Store the module for future use.
    module_GUI_Function$Analyse$PowerSpectralDensity = module;

    moduledict_GUI_Function$Analyse$PowerSpectralDensity = MODULE_DICT(module_GUI_Function$Analyse$PowerSpectralDensity);

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
        PRINT_STRING("GUI_Function$Analyse$PowerSpectralDensity: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("GUI_Function$Analyse$PowerSpectralDensity: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("GUI_Function$Analyse$PowerSpectralDensity: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "GUI_Function.Analyse.PowerSpectralDensity" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initGUI_Function$Analyse$PowerSpectralDensity\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_GUI_Function$Analyse$PowerSpectralDensity,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_GUI_Function$Analyse$PowerSpectralDensity,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[21]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_GUI_Function$Analyse$PowerSpectralDensity,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_GUI_Function$Analyse$PowerSpectralDensity);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_GUI_Function$Analyse$PowerSpectralDensity);
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

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$PowerSpectralDensity;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_2);
    }
    frame_frame_GUI_Function$Analyse$PowerSpectralDensity = MAKE_MODULE_FRAME(code_objects_4fcb212397db42624ebbc4adf92c0a16, module_GUI_Function$Analyse$PowerSpectralDensity);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$PowerSpectralDensity);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$PowerSpectralDensity) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[128], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[129], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[131];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                mod_consts[132],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[132]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE_FIXED(tstate, mod_consts[8], mod_consts[8]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 15;
        {
            PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts[49], mod_consts[49]);
            if (likely(hard_module != NULL)) {
                tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[50]);

                Py_DECREF(hard_module);

            } else {
                tmp_assign_source_7 = NULL;
            }
        }
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[134];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 16;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                mod_consts[135],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[136];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[137];
        tmp_level_value_3 = const_int_0;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 17;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                mod_consts[58],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[138];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[139];
        tmp_level_value_4 = const_int_pos_1;
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 19;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                mod_consts[105],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[140];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[141];
        tmp_level_value_5 = mod_consts[142];
        frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 20;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_GUI_Function$Analyse$PowerSpectralDensity,
                mod_consts[109],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[143];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[144], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[145];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[126], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[146], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[147];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[70], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[148];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[112], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[11];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[113], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = Py_None;
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = Py_None;
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[55];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame.f_lineno = 22;
            tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 22;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22);
        locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22);
        locals_GUI_Function$Analyse$PowerSpectralDensity$$$class__1_PSD_22 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_14);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_defaults_1 = mod_consts[149];
        tmp_dict_key_1 = mod_consts[150];
        tmp_expression_value_1 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[151]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_expression_value_2 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_Union(tstate);
            if (unlikely(tmp_expression_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = mod_consts[152];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_16 = MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__1_psd_plot(tstate, tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_3;
        tmp_defaults_2 = mod_consts[154];
        tmp_dict_key_2 = mod_consts[155];
        tmp_expression_value_3 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[151]);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[156];
            tmp_expression_value_4 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[151]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[31];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[157];
            tmp_dict_value_2 = (PyObject *)&PyDict_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_17 = MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__2_sync_psd_plot(tstate, tmp_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_5;
        tmp_defaults_3 = mod_consts[154];
        tmp_dict_key_3 = mod_consts[155];
        tmp_expression_value_5 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[151]);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_6;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[156];
            tmp_expression_value_6 = module_var_accessor_GUI_Function$Analyse$PowerSpectralDensity_$$_np(tstate);
            if (unlikely(tmp_expression_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 224;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[151]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 224;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[31];
            tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[157];
            tmp_dict_value_3 = (PyObject *)&PyDict_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_18 = MAKE_FUNCTION_GUI_Function$Analyse$PowerSpectralDensity$$$function__3_sync_psd_plot_band(tstate, tmp_defaults_3, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_18);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$PowerSpectralDensity, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$PowerSpectralDensity->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$PowerSpectralDensity, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_GUI_Function$Analyse$PowerSpectralDensity);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("GUI_Function$Analyse$PowerSpectralDensity", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "GUI_Function.Analyse.PowerSpectralDensity" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_GUI_Function$Analyse$PowerSpectralDensity);
    return module_GUI_Function$Analyse$PowerSpectralDensity;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$PowerSpectralDensity, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("GUI_Function$Analyse$PowerSpectralDensity", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
