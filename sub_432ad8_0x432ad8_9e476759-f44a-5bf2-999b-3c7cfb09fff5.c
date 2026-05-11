// ============================================================
// 函数名称: sub_432ad8
// 虚拟地址: 0x432ad8
// WARP GUID: 9e476759-f44a-5bf2-999b-3c7cfb09fff5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e92c, sub_42e994
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_432ad8(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx_1
    void* ebx_1
    int32_t* esi_1
    ebx_1, esi_1 = sub_42e994(arg1, arg2)
    *(ebx_1 + 4) = 0x80800000
    *(ebx_1 + 0x24) |= 0x800
    
    if (data_531754 != 0)
        *(ebx_1 + 8) = 0x80
    
    return sub_42e92c(esi_1, ebx_1 + 8)
}
