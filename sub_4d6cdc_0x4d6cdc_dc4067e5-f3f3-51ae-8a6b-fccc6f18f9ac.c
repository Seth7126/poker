// ============================================================
// 函数名称: sub_4d6cdc
// 虚拟地址: 0x4d6cdc
// WARP GUID: dc4067e5-f3f3-51ae-8a6b-fccc6f18f9ac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_408e1c, sub_4cb8e8, sub_48be98, sub_403e1c
// [被调用的父级函数]: sub_50a64c, sub_4c2418, sub_4c95c4, sub_4c585c, sub_4ecc78
// ============================================================

int32_t __convention("regparm")sub_4d6cdc(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x20)
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4cb8e8() == 0)
        if (data_52fe8c == 0)
            int32_t var_3c_3 = 0
            int32_t var_40_3 = *(arg1 + 0xa64)
            void* const var_44_3 = "\data\bilder\"
            int32_t var_1c
            sub_408e1c(*(data_61c8c8 + 0xdbc), &var_1c)
            int32_t var_48_3 = var_1c
            void* const var_4c_3 = "\chips.jpg"
            char* var_18
            sub_404138(&var_18, 4)
            int32_t eax_17
            void* esi_3
            eax_17, esi_3 = sub_48be98(arg1, var_18, 0, ExceptionList.b)
            data_61d0f4 = eax_17
            int32_t var_3c_4 = 0
            int32_t var_40_4 = *(esi_3 + 0xa64)
            void* const var_44_4 = "\data\bilder\"
            sub_408e1c(*(data_61c8c8 + 0xdbc), &var_24)
            int32_t var_48_4 = var_24
            void* const var_4c_4 = &data_4d6f04
            char* var_20
            sub_404138(&var_20, 4)
            data_61d0f8 = sub_48be98(esi_3, var_20, 0)
            data_52fe8c = 1
        
        data_61d0dc = data_61d0f4
        data_61d0e0 = data_61d0f8
    else
        if (data_52fe88 == 0)
            int32_t var_3c_1 = 0
            int32_t var_40_1 = *(arg1 + 0xa64)
            void* const var_44_1 = "\data\bilder\"
            int32_t var_c
            sub_408e1c(*(data_61c8c8 + 0xdbc), &var_c)
            int32_t var_48_1 = var_c
            void* const var_4c_1 = "\_echips.jpg"
            char* var_8
            sub_404138(&var_8, 4)
            int32_t eax_5
            void* esi_2
            eax_5, esi_2 = sub_48be98(arg1, var_8, 0, ExceptionList.b)
            data_61d0ec = eax_5
            int32_t var_3c_2 = 0
            int32_t var_40_2 = *(esi_2 + 0xa64)
            void* const var_44_2 = "\data\bilder\"
            int32_t var_14
            sub_408e1c(*(data_61c8c8 + 0xdbc), &var_14)
            int32_t var_48_2 = var_14
            void* const var_4c_2 = "\_echipk.jpg"
            char* var_10
            sub_404138(&var_10, 4)
            data_61d0f0 = sub_48be98(esi_2, var_10, 0)
            data_52fe88 = 1
        
        data_61d0dc = data_61d0ec
        data_61d0e0 = data_61d0f0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_30_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4d6e97
    return sub_403e1c(&var_24, 8)
}
