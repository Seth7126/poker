// ============================================================
// 函数名称: sub_40c964
// 虚拟地址: 0x40c964
// WARP GUID: 1558ce16-da98-5f72-affe-62470994bc3f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CloseHandle, DeleteCriticalSection
// [内部子函数调用]: sub_403430, sub_403420, sub_4030c0, sub_40c9e0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40c964(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t edx
    edx.b = arg2.b & 0xfc
    sub_4030c0(sub_40c9e0(arg1), edx)
    CloseHandle(arg1[7])
    int32_t result = DeleteCriticalSection(&arg1[1])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
