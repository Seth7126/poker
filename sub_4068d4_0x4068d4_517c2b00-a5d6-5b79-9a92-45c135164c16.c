// ============================================================
// 函数名称: sub_4068d4
// 虚拟地址: 0x4068d4
// WARP GUID: 517c2b00-a5d6-5b79-9a92-45c135164c16
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4097ab, sub_40986b
// ============================================================

int32_t __fastcallsub_4068d4(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg5 != 0 || (arg2 != 0 && arg4 != 0))
    if (arg5 != 0 || (arg2 != 0 && arg4 != 0))
        int32_t i = 0x40
        int32_t edi_1 = 0
        int32_t esi_1 = 0
        
        do
            int32_t temp3_1 = arg3
            arg3 <<= 1
            arg2 = rlc.d(arg2, 1, (temp3_1 & 0x80000000) != 0)
            bool c_2 = unimplemented  {rcl edx, 0x1}
            esi_1 = rlc.d(esi_1, 1, c_2)
            bool c_3 = unimplemented  {rcl esi, 0x1}
            edi_1 = rlc.d(edi_1, 1, c_3)
            
            if (edi_1 u>= arg5 && (edi_1 u> arg5 || esi_1 u>= arg4))
                int32_t temp6_1 = esi_1
                esi_1 -= arg4
                edi_1 = sbb.d(edi_1, arg5, temp6_1 u< arg4)
                arg3 += 1
            
            i -= 1
        while (i != 0)
    else
        arg3 = divu.dp.d(arg2:arg3, arg4)
    
    return arg3
}
