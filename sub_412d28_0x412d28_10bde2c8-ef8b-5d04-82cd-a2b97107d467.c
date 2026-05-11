// ============================================================
// 函数名称: sub_412d28
// 虚拟地址: 0x412d28
// WARP GUID: 10bde2c8-ef8b-5d04-82cd-a2b97107d467
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_412c50
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412d28(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = arg1[3]
    int32_t eax = arg1[3]
    
    if (eax s>= 0 && arg3 s>= 0)
        int32_t edi_2 = eax + arg3
        
        if (edi_2 s> 0)
            if (edi_2 s> arg1[2])
                if (edi_2 s> arg1[4])
                    sub_412c50(arg1, edi_2)
                
                arg1[2] = edi_2
            
            sub_402980(arg2, arg1[1] + arg1[3], arg3)
            arg1[3] = edi_2
            return arg3
    
    return 0
}
