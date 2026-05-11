// ============================================================
// 函数名称: sub_4251a0
// 虚拟地址: 0x4251a0
// WARP GUID: e0179549-12f9-5212-b79b-8c9caa951e6c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e994, sub_42e8c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4251a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx_1
    void* ebx_1
    void* esi_1
    ebx_1, esi_1 = sub_42e994(arg1, arg2)
    sub_42e8c0(sub_4251d2+2, esi_1)
    int32_t eax_2
    eax_2.b = *(ebx_1 + 0x1f8)
    int32_t result = *((eax_2 << 2) + &data_52e6f4)
    *(esi_1 + 4) |= result
    return result
}
