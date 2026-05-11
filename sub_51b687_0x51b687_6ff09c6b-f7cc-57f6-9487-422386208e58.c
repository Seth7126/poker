// ============================================================
// 函数名称: sub_51b687
// 虚拟地址: 0x51b687
// WARP GUID: 6ff09c6b-f7cc-57f6-9487-422386208e58
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4909b8, sub_4908c8
// [被调用的父级函数]: sub_51b5c0
// ============================================================

void*sub_51b687()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t (* var_8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    int32_t** eax
    void* ebp_1
    eax, ebp_1 = sub_4908c8(sub_48fdb0+0x100, edx, data_5301f8)
    *(*(ebp_1 - 4) + 8) = eax
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_4_1)(void* arg1 @ ebp) = sub_51b6f9
    
    if (*(*(*(ebp_1 - 4) + 8) + 4) != 0)
        *(*(ebp_1 - 4) + 0x979) = 0
        return sub_4909b8(*(*(ebp_1 - 4) + 8), *data_530304, 0)
    
    void* result = *(ebp_1 - 4)
    *(result + 0x979) = 1
    return result
}
