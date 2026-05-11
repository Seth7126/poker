// ============================================================
// 函数名称: sub_4d6f10
// 虚拟地址: 0x4d6f10
// WARP GUID: 08359a98-c73e-5741-9c7f-369f6267db12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_403e1c, sub_408e1c, sub_48bd6c
// [被调用的父级函数]: sub_4dd1e0, sub_4d6eff, sub_4dd1d7
// ============================================================

int32_t __convention("regparm")sub_4d6f10(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
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
    
    if (data_52fe88 == 0)
        int32_t var_3c_1 = *(arg1 + 0xa64)
        void* const var_40_1 = "\data\bilder\"
        int32_t var_c
        sub_408e1c(*(data_61c8c8 + 0xdbc), &var_c)
        int32_t var_44_1 = var_c
        void* const var_48_1 = "\_echips.jpg"
        char* var_8
        sub_404138(&var_8, 4)
        void** eax_4
        void* ebp_2
        eax_4, ebp_2 = sub_48bd6c(arg1, var_8, 0xffffffff)
        data_61d0ec = eax_4
        int32_t var_3c_2 = *(arg1 + 0xa64)
        void* const var_40_2 = "\data\bilder\"
        sub_408e1c(*(data_61c8c8 + 0xdbc), ebp_2 - 0x10)
        int32_t var_44_2 = *(ebp_2 - 0x10)
        void* const var_48_2 = "\_echipk.jpg"
        sub_404138(ebp_2 - 0xc, 4)
        void** eax_9
        eax_9, ebp_1 = sub_48bd6c(arg1, *(ebp_2 - 0xc), 0xffffffff)
        data_61d0f0 = eax_9
        data_52fe88 = 1
    
    if (data_52fe8c == 0)
        int32_t var_3c_3 = *(arg1 + 0xa64)
        void* const var_40_3 = "\data\bilder\"
        sub_408e1c(*(data_61c8c8 + 0xdbc), &ebp_1[-6])
        int32_t var_44_3 = ebp_1[-6]
        void* const var_48_3 = "\chips.jpg"
        sub_404138(&ebp_1[-5], 4)
        void** eax_14
        void* ebp_3
        eax_14, ebp_3 = sub_48bd6c(arg1, ebp_1[-5], 0xffffffff)
        data_61d0f4 = eax_14
        int32_t var_3c_4 = *(arg1 + 0xa64)
        void* const var_40_4 = "\data\bilder\"
        sub_408e1c(*(data_61c8c8 + 0xdbc), ebp_3 - 0x20)
        int32_t var_44_4 = *(ebp_3 - 0x20)
        void* const var_48_4 = "\chipk.jpg"
        sub_404138(ebp_3 - 0x1c, 4)
        void** eax_19
        eax_19, ebp_1 = sub_48bd6c(arg1, *(ebp_3 - 0x1c), 0xffffffff)
        data_61d0f8 = eax_19
        data_52fe8c = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_30_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4d708d
    return sub_403e1c(&ebp_1[-8], 8)
}
