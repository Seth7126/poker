// ============================================================
// 函数名称: sub_415ee0
// 虚拟地址: 0x415ee0
// WARP GUID: c1c2f1ad-bb52-54e3-a47f-66b89bdff756
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4163ac, sub_415e8c, sub_4163fc
// [被调用的父级函数]: sub_415d18
// ============================================================

int32_t __convention("regparm")sub_415ee0(int32_t* arg1, void** arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.w = 0xfff6
    sub_4032ac(arg2, arg1)
    (*(*arg1 + 0x20))(arg2[2])
    sub_415e8c(arg1, arg2)
    int32_t ecx_1
    int32_t edx_4
    ecx_1, edx_4 = sub_4163fc(arg2, 1)
    
    if ((arg1[8].b & 0x10) != 0)
        ecx_1.b = 1
        edx_4.b = 1
        sub_4163ac(arg2, edx_4, ecx_1)
    
    return (*(*arg1 + 0x10))()
}
