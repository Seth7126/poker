// ============================================================
// 函数名称: sub_44cf07
// 虚拟地址: 0x44cf07
// WARP GUID: 755920b8-2b02-5951-b3dc-df548db38f66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalDeleteAtom
// [内部子函数调用]: sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44cf07(char* arg1)
{
    // 第一条实际指令: arg1[0x53] += arg1:1.b
    arg1[0x53] += arg1:1.b
    *arg1 += arg1.b
    arg1.b &= 0xeb
    int32_t edx
    int32_t var_4 = edx
    int32_t entry_ebx
    arg1[3] += entry_ebx:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1:1.b
    
    if (data_52eac8 != 0)
        arg1.w = data_52eac8
        GlobalDeleteAtom(arg1.w)
    
    sub_404780(&data_52eaf4, sub_4010c0, 0xb)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = entry_ebx
    __return_addr = &data_44cfb1
    return 0
}
