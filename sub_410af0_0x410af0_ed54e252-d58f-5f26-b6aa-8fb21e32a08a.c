// ============================================================
// 函数名称: sub_410af0
// 虚拟地址: 0x410af0
// WARP GUID: ed54e252-d58f-5f26-b6aa-8fb21e32a08a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_413564, sub_4030c0
// [被调用的父级函数]: sub_411458, sub_41b9fc, sub_410cf8, sub_415d64, sub_41db48, sub_4192d0, sub_4a0b48, sub_410ee4, sub_45361c, sub_41f590, sub_4a19ec, sub_41c09c, sub_4a20ec
// ============================================================

int32_t __convention("regparm")sub_410af0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(sub_413564(arg1), edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
