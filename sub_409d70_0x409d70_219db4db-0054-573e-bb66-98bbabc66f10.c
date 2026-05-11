// ============================================================
// 函数名称: sub_409d70
// 虚拟地址: 0x409d70
// WARP GUID: 219db4db-0054-573e-bb66-98bbabc66f10
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409dac, sub_409ee8
// ============================================================

uint32_t __convention("regparm")sub_409d70(int16_t arg1) __pure
{
    // 第一条实际指令: if ((zx.d(arg1) & 3) == 0)
    if ((zx.d(arg1) & 3) == 0)
        uint32_t ebx_1 = zx.d(arg1)
        
        if (modu.dp.d(0:ebx_1, 0x64) != 0 || modu.dp.d(0:ebx_1, 0x190) == 0)
            uint32_t result
            result.b = 1
            return result
    
    return 0
}
