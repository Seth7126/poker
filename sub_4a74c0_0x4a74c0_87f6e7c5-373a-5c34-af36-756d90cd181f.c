// ============================================================
// 函数名称: sub_4a74c0
// 虚拟地址: 0x4a74c0
// WARP GUID: 87f6e7c5-373a-5c34-af36-756d90cd181f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_40cc98, sub_403430, sub_4a8048, sub_4a33f0
// [被调用的父级函数]: sub_4ac698
// ============================================================

int32_t __convention("regparm")sub_4a74c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    (*(*arg1 + 0x5c))()
    sub_4a8048(arg1, nullptr)
    sub_40cc98(&arg1[0x1b])
    sub_40cc98(&arg1[0x27])
    sub_40cc98(&arg1[0x1e])
    sub_40cc98(&arg1[0x19])
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4a33f0(arg1, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
