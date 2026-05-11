// ============================================================
// 函数名称: sub_442cad
// 虚拟地址: 0x442cad
// WARP GUID: b1f66489-bc3c-5477-b365-8e080ba5fc0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ca10
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_442cad(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2.b
    int32_t edi
    int32_t var_4 = edi
    sub_42ca10(arg1, arg2)
    arg1[0x4e]
    (*(*arg2 + 4))(sub_442db4, arg1)
    arg1[0x4e]
    (*(*arg2 + 4))(sub_442d98, arg1, sub_442d80, arg1)
    return (*(*arg2 + 4))(0, 0, 0x442d60, arg1)
}
