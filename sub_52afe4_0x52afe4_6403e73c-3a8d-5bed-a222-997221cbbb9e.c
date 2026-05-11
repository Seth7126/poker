// ============================================================
// 函数名称: sub_52afe4
// 虚拟地址: 0x52afe4
// WARP GUID: 6403e73c-3a8d-5bed-a222-997221cbbb9e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_4748fc, sub_408e1c, sub_403e1c
// [被调用的父级函数]: sub_5223e8
// ============================================================

int32_t __convention("regparm")sub_52afe4(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_18
    __builtin_memset(&var_18, 0, 0x14)
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c
    sub_408e1c(*(arg1 + 0xc), &var_c)
    int32_t var_34 = var_c
    void* const var_38 = " Matches, "
    int32_t var_10
    sub_408e1c(*(arg1 + 8), &var_10)
    int32_t var_3c = var_10
    void* const var_40 = " Runden"
    char* var_8
    sub_404138(&var_8, 4)
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t ebx_1 = 1
        int32_t i
        
        do
            char* var_28_1 = var_8
            void* const var_2c_1 = &data_52b100
            ExceptionList = "Spieler "
            int32_t var_14
            sub_408e1c(ebx_1, &var_14)
            int32_t var_34_1 = var_14
            void* const var_38_1 = &data_52b120
            sub_408e1c(*(arg1 + (ebx_1 << 2) + 0x10), &var_18)
            int32_t var_3c_1 = var_18
            void* const var_40_1 = " Punkte"
            sub_404138(&var_8, 7)
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t var_28_2 = 0
    void* const var_2c_2 = "!Weiter"
    ExceptionList = 1
    sub_4748fc(*data_530304, var_8, "Spielergebnis", 0, ExceptionList, var_2c_2)
    fsbase->NtTib.ExceptionList = 0
    int32_t (* var_2c_3)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_52b0ca
    return sub_403e1c(&var_18, 5)
}
