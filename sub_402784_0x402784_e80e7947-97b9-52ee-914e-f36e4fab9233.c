// ============================================================
// 函数名称: sub_402784
// 虚拟地址: 0x402784
// WARP GUID: e80e7947-97b9-52ee-914e-f36e4fab9233
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_4043ac, sub_405368, sub_412800, sub_4106dc
// ============================================================

void __convention("regparm")sub_402784(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        if (arg2 == 0)
            return 
        
        int32_t** var_4_2 = arg1
        int32_t* eax_6 = data_52e024(var_4_2)
        
        if (eax_6 != 0)
            *var_4_2 = eax_6
            return 
    else
        if (arg2 == 0)
            *arg1 = arg2
            
            if (data_52e028() == 0)
                return 
            
            int32_t eax_2
            eax_2.b = 2
            noreturn sub_4027e0(eax_2) __tailcall
        
        int32_t* eax_1 = data_52e02c(arg1)
        
        if (eax_1 != 0)
            *arg1 = eax_1
            return 
    
    arg1.b = 1
    noreturn sub_4027e0(arg1) __tailcall
}
