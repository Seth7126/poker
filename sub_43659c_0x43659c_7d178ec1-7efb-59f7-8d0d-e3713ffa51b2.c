// ============================================================
// 函数名称: sub_43659c
// 虚拟地址: 0x43659c
// WARP GUID: 7d178ec1-7efb-59f7-8d0d-e3713ffa51b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_44a500, sub_416694, sub_4289ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43659c(LPARAM arg1)
{
    // 第一条实际指令: int32_t* edi = *(arg1 + 0x4c)
    int32_t* edi = *(arg1 + 0x4c)
    char eax_1
    
    if (edi != 0)
        int32_t ebx
        ebx.w = 0xfff1
        eax_1 = sub_4032ac(edi, arg1)
    
    if ((edi == 0 || eax_1 == 0) && sub_44a500(*data_530660) == 0 && sub_416694(arg1) == 0
            && sub_4289ac(0xb03f, 0, arg1) != 1)
        return 0
    
    return 1
}
