// ============================================================
// 函数名称: sub_42e838
// 虚拟地址: 0x42e838
// WARP GUID: 18809b1f-1746-5ae6-b86b-d73bfa1f58f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_441174, sub_42e1cc, sub_4318e4, sub_441c2c, sub_42eda0, sub_42e4a4, sub_4314c8, sub_434670, sub_42e3d0, sub_42f900, sub_4337f8, sub_446c48, sub_434144, sub_42da58, sub_44688c, sub_446644, sub_4430c0, sub_431f30, sub_431e20, sub_430c34, sub_42e858, sub_431420, sub_42e078, sub_4323e0, sub_4309f4, sub_44678c
// ============================================================

int32_t __convention("regparm")sub_42e838(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t ecx = *(arg1 + 0x134)
    
    if (ecx != 0)
        result = *(ecx + 8)
    
    int32_t ecx_1 = *(arg1 + 0x180)
    
    if (ecx_1 == 0)
        return result
    
    return result + *(ecx_1 + 8)
}
