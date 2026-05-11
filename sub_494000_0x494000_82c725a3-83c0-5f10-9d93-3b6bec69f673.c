// ============================================================
// 函数名称: sub_494000
// 虚拟地址: 0x494000
// WARP GUID: 82c725a3-83c0-5f10-9d93-3b6bec69f673
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteCriticalSection
// [内部子函数调用]: sub_403430, sub_403420, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_494000(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(DeleteCriticalSection(&arg1[1]), edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
