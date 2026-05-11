// ============================================================
// 函数名称: sub_4ee074
// 虚拟地址: 0x4ee074
// WARP GUID: 189080be-87bd-5e39-967a-1558e695db66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4ee134
// ============================================================

int32_t __convention("regparm")sub_4ee074(int32_t arg1)
{
    // 第一条实际指令: void* edx
    void* edx
    edx.b = *(*data_5301f4 + 0xffec)
    
    if (edx.b != 0)
        data_5301f4
        
        if (edx.b != 1)
            data_5301f4
            
            if (edx.b != 2)
                data_5301f4
                
                if (edx.b != 4)
                    data_5301f4
                    
                    if (edx.b != 5)
                        data_5301f4
                        
                        if (edx.b != 6)
                            data_5301f4
                            
                            if (edx.b != 7)
                                data_5301f4
                                
                                if (edx.b != 8)
                                    data_5301f4
                                    
                                    if (edx.b == 9)
                                        arg1 = 0x1f40
                                else
                                    arg1 = 0x1b58
                            else
                                arg1 = 0x1770
                        else
                            arg1 = 0x1388
                    else
                        arg1 = 0xfa0
                else
                    arg1 = 0xbb8
            else
                arg1 = 0x7d0
        else
            arg1 = 0x3e8
    else
        arg1 = 0
    
    void* edx_2 = *data_5301f4
    
    if (not(add_overflow(arg1, *(edx_2 + 0xfff0))))
        return arg1 + *(edx_2 + 0xfff0)
    
    sub_403010()
    noreturn
}
