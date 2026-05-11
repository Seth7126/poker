// ============================================================
// 函数名称: sub_4a7670
// 虚拟地址: 0x4a7670
// WARP GUID: e5aa09ff-9cef-5bff-8352-e64fdac8cc9e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_4128c0, sub_4a8bc0
// [被调用的父级函数]: sub_4a7cd8, sub_4a7e8d, sub_4a796c
// ============================================================

void __convention("regparm")sub_4a7670(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (arg3 s<= 0 || arg2 == 0)
        return 
    
    while (true)
        int32_t eax_3
        int32_t edx
        eax_3, edx = sub_4128c0(arg1[0x1b])
        
        if (arg3 s<= eax_3)
            break
        
        edx.b = 1
        int32_t ecx_1
        int32_t edx_1
        edx_1, ecx_1 = (*(*arg1 + 0x6c))(1)
        ecx_1.b = 1
        edx_1.b = 1
        (*(*arg1 + 0x48))()
    
    sub_402980(sub_4a8bc0(arg1[0x1b]), arg2, arg3)
    (*(*arg1[0x1b] + 0x18))()
}
