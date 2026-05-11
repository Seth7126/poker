// ============================================================
// 函数名称: sub_4259b4
// 虚拟地址: 0x4259b4
// WARP GUID: 8d691552-00e4-5def-a166-8ffa1821326d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_4030d0, sub_42da58
// [被调用的父级函数]: sub_4b486f
// ============================================================

int32_t __convention("regparm")sub_4259b4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t edx
    edx.b = arg2.b & 0xfc
    sub_42da58(arg1, edx)
    sub_4030d0(arg1[0x7e])
    sub_4030d0(arg1[0x7c])
    int32_t result = sub_4030d0(arg1[0x84])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
