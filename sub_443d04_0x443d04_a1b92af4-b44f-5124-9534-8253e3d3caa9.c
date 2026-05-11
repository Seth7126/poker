// ============================================================
// 函数名称: sub_443d04
// 虚拟地址: 0x443d04
// WARP GUID: a1b92af4-b44f-5124-9534-8253e3d3caa9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415df8, sub_443c64
// [被调用的父级函数]: sub_442994
// ============================================================

void __convention("regparm")sub_443d04(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0x90])
    if (arg2 == arg1[0x90])
        return 
    
    arg1[0x90] = arg2
    
    if (arg2 != 0)
        sub_415df8(arg2, arg1)
    
    sub_443c64(arg1)
}
