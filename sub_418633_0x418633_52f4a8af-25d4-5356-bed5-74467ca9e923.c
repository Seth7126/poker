// ============================================================
// 函数名称: sub_418633
// 虚拟地址: 0x418633
// WARP GUID: 52f4a8af-25d4-5356-bed5-74467ca9e923
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410070
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_418633(char* arg1, char** arg2, int16_t arg3, int32_t arg4 @ ebp, void* arg5 @ edi)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx -= 1
    *arg1 += arg1.b
    *(arg5 + 0x45) += arg3.b
    __return_addr = arg2
    void* var_4 = entry_ebx + 1
    *(arg2 + 0x11) += (arg3 + 1):1.b
    return sub_410070(0x52e53c, arg2, arg1 - 1, &var_4)
}
