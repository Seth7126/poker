// ============================================================
// 函数名称: sub_4700e1
// 虚拟地址: 0x4700e1
// WARP GUID: b1801986-8fee-5c03-a571-ed183a205daa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47c160
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4700e1(char* arg1, int16_t arg2, int32_t arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_4 = arg3
    int32_t ebx
    int32_t var_8 = ebx
    int32_t* esp_1 = &var_8
    *(arg4 - 1) = arg3.b
    char* ebx_1 = arg1
    
    if (*(ebx_1 + 0xa4a) != 0)
        arg1.b = *(arg4 + 0x10)
        arg3.b = *(arg4 - 1)
        *(ebx_1 + 0xa4c)
        (*(ebx_1 + 0xa48))(*(arg4 + 8), *(arg4 + 0xc), arg1)
        void arg_4
        esp_1 = &arg_4
    
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 1
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = 0
    int32_t result = sub_47c160(ebx_1, *(ebx_1 + 0x9a0), *(ebx_1 + 0x9a4))
    ebx_1[0xa60] = 0
    *(esp_1 - 0x10)
    *(esp_1 - 0xc)
    *(esp_1 - 8)
    return result
}
