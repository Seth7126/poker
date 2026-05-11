// ============================================================
// 函数名称: sub_4c1b10
// 虚拟地址: 0x4c1b10
// WARP GUID: 9eda4335-14cb-556f-9b92-4d02a0ea0082
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512cbc, sub_518f60, sub_4c0924
// [被调用的父级函数]: sub_4bdf18, sub_4c62e8, sub_4c1254
// ============================================================

int32_t __convention("regparm")sub_4c1b10(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    char eax = sub_4c0924()
    bool eax_3
    
    if (eax != 0)
        eax_3 = sub_512cbc(*data_530454, arg2)
    
    if (eax == 0 || eax_3 == 0)
        entry_result = 0
        
        switch (arg1)
            case 1
                return sub_518f60(0, arg2, *data_5303b8, arg3, 2, 1)
            case 2
                return sub_518f60(0, arg2, *data_5303b8, arg3, 3, 2)
            case 3
                return sub_518f60(0, arg2, *data_5303b8, arg3, 3, 3)
            case 0xb
                return sub_518f60(0, arg2, *data_5303b8, arg3, 0xffffffff, 0xfffffffe)
            case 0xc
                return sub_518f60(0, arg2, *data_5303b8, arg3, 0xfffffffe, 0xfffffffd)
            case 0xd
                return sub_518f60(0, arg2, *data_5303b8, arg3, 0xfffffffd, 0xfffffffd)
        
        if (arg1 != 0x24)
            if (arg1 != 0x26)
                if (arg1 != 0x25)
                    if (arg1 - 0x16 u< 4 || arg1 - 0x27 u< 2)
                        if (*(*data_5301f4 + 0x2111c) == 0)
                            int32_t var_20_10 = arg3
                            arg3.b = 3
                            entry_result = sub_518f60(arg3.b, arg2, *data_5303b8, var_20_10, arg1, arg1)
                        
                        *(*data_5301f4 + 0x2111c) = 1
                else if (not.d(arg2) - 1 u< 4 || not.d(arg2) == 7)
                    if (*(*data_5301f4 + 0x2111c) == 0)
                        int32_t var_20_9 = arg3
                        arg3.b = 3
                        entry_result = sub_518f60(arg3.b, arg2, *data_5303b8, var_20_9, 0x26, 0x26)
                    
                    *(*data_5301f4 + 0x2111c) = 1
            else if (not.d(arg2) - 1 u< 4 || not.d(arg2) == 7)
                if (*(*data_5301f4 + 0x2111c) == 0)
                    int32_t var_20_8 = arg3
                    arg3.b = 3
                    entry_result = sub_518f60(arg3.b, arg2, *data_5303b8, var_20_8, 0x25, 0x25)
                
                *(*data_5301f4 + 0x2111c) = 1
        else if (not.d(arg2) - 1 u< 4 || not.d(arg2) == 7)
            if (*(*data_5301f4 + 0x2111c) == 0)
                int32_t var_20_7 = arg3
                arg3.b = 3
                entry_result = sub_518f60(arg3.b, arg2, *data_5303b8, var_20_7, 0x24, 0x24)
            
            *(*data_5301f4 + 0x2111c) = 1
    
    return entry_result
}
